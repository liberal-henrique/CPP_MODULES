#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int ft_error(char *s, char *arg)
{
	while (*s)
		write(2, s++, 1);
	if (arg)
		while (*arg)
			write(2, arg++, 1);
	write(2, "\n", 1);
	return (1);
}

int	ft_exec(char **av, int i, int tmp_fd, char **env)
{
	av[i] = NULL;
	close (tmp_fd);
	execve(av[0], av, env);
	return (ft_error("cannot execute", av[0]));
}

int	main(int ac, char **av, char **env)
{
	int i;
	int tmp_fd;
	int fd[2];
	(void) ac;

	i = 0;
	tmp_fd = dup(STDIN_FILENO);
	while (av && av[i])
	{
		i = 0;
		av = &av[i + 1];
		while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
			i++;
		if (strcmp(av[i], "cd"))
		{
			if (i != 2)
				ft_error("bad argument", NULL);
			if (chdir(av[0]) != 0)
				ft_error("cannot open", av[0]);
		}
		else if (i != 0 && (av[i] == NULL || strcmp(av[i], ";") == 0))
		{
			if (fork() == 0)
			{
				if (ft_exec(av, i, tmp_fd, env))
					return (1);
				else
				{
					close(tmp_fd);
					while (waitpid(-1, NULL, WUNTRACED) != -1)
						;
					tmp_fd = STDIN_FILENO;
				}
			}
		}
		else if (i != 0 && strcmp(av[i], "|"))
		{
			pipe(fd);
			if (fork() == 0)
			{
				dup2(fd[1], STDOUT_FILE);
				close(fd[0]);
				close(fd[0]);
				if (execve(av, i , tmp_fd, env))
					return (1);
			}
			else
			{
				close (fd[0]);
				close (tmp_fd);
				tmp = fd[0];
			}
		}
	}
}
