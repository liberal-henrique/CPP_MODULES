/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_matching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:13:03 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/09 21:30:15 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// "abacate" "luana" --> abctelun
// isso eh basicamente o union;


int main(int ac, char **av)
{
	if (ac < 3)
	{
		printf("Invalid number of argument\n");
		return (1);
	}

	char *s1 = av[1];
	char *s2 = av[2];

	for (int i = 0; s1[i]; i++) {
		j = 0;
		for (int j = 0; s1[j]; j++) {
			if (j == i)
			{
				write(1, &s1[i], 1);
				break ;
			}
			if (j != i && s[i] == s[j])
				break ;
		}
	}
	int flag = 0;
	for(int i = 0; s2[i]; i++) {
		j = 0;
		for (int j = 0; s2[j], j++) {
			if (j )
			if (j != i && s[i] == s[j])
				break ;
		}
	}

}

