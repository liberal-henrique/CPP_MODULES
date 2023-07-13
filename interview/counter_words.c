/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:39:17 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/11 16:24:42 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// int main(int ac, char **av) {

// 	if (ac < 2)
// 		return (0);
// 	int arr[255] = {0};
// 	while (*av[1])
// 		arr[(int)*av[1]++]++;

// 	printf("a: %d, e: %d, i: %d, o: %d, u: %d", arr['a'], arr['e'], arr['i'], arr['o'], arr['u']);
// }

// int	ft_strlen(char *s)
// {
// 	for (int i = 0; ; i++)
// 	{
// 		if (!s[i])
// 			return (i);
// 	}
// }



// int main(int ac, char **av) {

// 	if (ac < 2)
// 		return (0);
// 	char *arr = "aAeEiIoOuU";
// 	int my_arr[5] = {0};
// 	int size = ft_strlen(arr);

// 	for (int i = 0; av[1][i]; i++)
// 	{
// 		for (int j = 0;  j < (size); j++) {
// 			if (arr[j] == av[1][i])
// 				my_arr[j / 2]++;
// 		}
// 	}
// 	printf("a: %d, e: %d, i: %d, o: %d, u: %d", my_arr[0], my_arr[1], my_arr[2], my_arr[3], my_arr[4]);
// }

void	rev_rec(char *s)
{
	if (*s)
	{
		rev_rec(s + 1);
		write(1, s 1);
		printf("\n");
		printf("%i", *s);
		printf("\n");
	}
	return ;
}


int main(int ac, char **av) {
	if (ac < 2)
		return(0);
	rev_rec(av[1]);
}
