/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci_recursive.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:14:56 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 18:26:28 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

int	put_nbr(int num)
{
	if (num > 9)
		put_nbr(num / 10);
	return (write(1, &"0123456789"[num % 10], 1));
}

int	fb_rec(int num)
{
	if (num == 1)
		return (1);
	else if (num == 0)
		return (0);
	else
		return (fb_rec(num - 1) + fb_rec(num - 2));

}

int main(int ac, char **av)
{
	if (ac < 2)
		return 1;
	for (int i = 0; i < atoi(av[1]); i++)
	{
		put_nbr(fb_rec(i));
		write(1, "-", 1);
	}
}
