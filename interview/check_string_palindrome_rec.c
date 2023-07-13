/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string_palindrome_rec.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:23:51 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/12 15:32:25 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	for (int i = 0; ; i++)
	{
		if (!s[i])
			return (i);
	}
	return (0);
}

//	Nos podemos tambem criar uma shallow copy de uma
// string e comparar as duas. Em C++ ha algumas formas
//

int	check_string(char *s, int i, int j)
{
	if (!s || i < 0 || j < 0)
		return 1;
	if (i == j)
		return (0);
	if (s[i] == s[j])
		return (check_string(s, i + 1, j - 1));
	return 0;
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	int i = 0;
	int j = ft_strlen(av[1]) - 1;
	if (!check_string(av[1], i, j))
		write(1, "yes\n", 4);
	else
		write(1, "no\n", 3);
}
