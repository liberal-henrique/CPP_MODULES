/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:40:53 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 18:14:27 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

int	put_nbr(int num)
{
	if (num > 9)
		put_nbr(num / 10);
	return (write(1, &"0123456789"[num % 10], 1));
}

int main(void)
{
	int anteprevious = 0;
	int previous = 1;
	int	fb = 0;
	put_nbr(previous);
	write(1, "-", 1);
	while(previous < 150)
	{
		fb = previous + anteprevious;
		anteprevious = previous;
		previous = fb;
		put_nbr(fb);
		write(1, "-", 1);
	}
	return (0);
}
