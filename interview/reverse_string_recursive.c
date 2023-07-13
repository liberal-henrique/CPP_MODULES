/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_string_recursive.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:36:25 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 18:39:22 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_recursive(char *s)
{
	if (*s)
	{
		reverse_recursive(s + 1);
		write(1, &*s, 1);
	}
	return ;
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	reverse_recursive(av[1]);
	write(1, "\n", 1);
}
