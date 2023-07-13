/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_particular_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:38:17 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 20:53:40 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	put_nbr(int num)
{
	if (num > 9)
		put_nbr(num / 10);
	return (write(1, &"0123456789"[num % 10], 1));
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	(void)av;
	char *s = av[1];
	char arr[5] = {0};
	char *looking_for = "aAeEiIoOuU";


	while (*s)
	{
		for (int i = 0; looking_for[i]; i++) {
			if (*s == looking_for[i])
			{
				arr[i/2]++;
				break ;
			}
		}
		s++;
	}
	printf("a: %d, e: %d, i: %d, o: %d, u: %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

