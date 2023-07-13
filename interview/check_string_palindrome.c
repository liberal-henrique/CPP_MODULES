/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_palindrome.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:40:36 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 20:13:29 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	for (int i = 0; ; i++)
	{
		if (!s[i])
			return (i);
	}
}

int check_palindrome(char *s, int i, int j)
{
	while (s[i] && j > 0)
	{
		if (s[i] != s[j])
			return (1);
		i++;
		j--;
	}
	return (0);
}


// TENET
// arara
int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	int i = 0;
	int j = ft_strlen(av[1]) - 1;
	if (!check_palindrome(av[1], i, j))
		write(1, "yes\n", 4);
	else
		write(1, "no\n", 3);

}
