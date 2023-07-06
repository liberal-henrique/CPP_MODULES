/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:24:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 18:27:44 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	write_num(int num, int base)
{
	if (num > base)
		write_num(num / base);
	return (write(1, &"0123456789"[num % base], 1));
}

int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *s)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	if (!s)
		return (0);
	while (ft_isspace(s[i]))
		i++;
	sign = (s[i] != '-') - (s[i] == '-');
	i += (s[i] == '-' || s[i] == '+');
	while (ft_isdigit(s[i]))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	write_num(ft_atoi(av[1]));
}

bool	isValid(char *s)
{
	char	*open = "({[";

	if (strchr(open, *s))
	{
		isValid(*s + 1);
	}
	else
	s++;
}




// {}()[]
// {([])}

