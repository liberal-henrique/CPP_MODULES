/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:28:14 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 18:35:43 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int	ft_strlen(char *s)
// {
// 	int i = 0;
// 	while (s && s[i])
// 		i++;
// 	return (i);
// }

int	put_nbr(int num)
{
	if (num > 9)
		put_nbr(num / 10);
	return (write(1, &"0123456789"[num % 10], 1));
}

int	ft_strlen(char *s)
{
	for (int i = 0; ; i++)
	{
		if (!s[i])
			return (i);
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	int size = ft_strlen(av[1]);
	while (size > 0)
		write(1, &av[1][--size], 1);
	write(1, "\n", 1);
}
