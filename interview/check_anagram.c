/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_anagram.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:11:06 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 11:59:37 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dcba

// Order the string

#include <stdio.h>
#include <stdbool.h>

int	ft_strlen(char *s)
{
	for(int i = 0; ; i++) {
		if (!s[i])
			return (i);
	}
}

void	sort_letter(char *s, int size)
{
	char aux;

	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - i - 1; j++) {
			if (s[j] > s[j + 1]) {
				aux = s[j];
				s[j] = s[j + 1];
				s[j + 1] = aux;
			}
		}
 	}
}

int	check_anagram(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(int ac, char **av) {
	if (ac < 3)
		return (0);

	sort_letter(av[1], ft_strlen(av[1]));
	sort_letter(av[2], ft_strlen(av[2]));

	if (!check_anagram(av[1], av[2]))
		printf("YEAH!\n");
	else
		printf("NOP\n");
}
