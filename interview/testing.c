/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:24:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 09:30:23 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	put_nbr(int num) {
	if (num > 9)
		put_nbr(num / 10);
	return (write(1, &"0123456789"[num % 10], 1));
}

// void	swap_num(int my_arr[], int first, int second)
// {
// 	int	aux;

// 	aux = my_arr[first];
// 	my_arr[first] = my_arr[second];
// 	my_arr[second] = aux;
// }

int	main()
{
	int	my_arr[] = {65, 69, 69, 12, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int	size = sizeof(my_arr) / sizeof(my_arr[0]);
	int	aux;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (my_arr[j + 1] < my_arr[j])
			{
				aux = my_arr[j + 1];
				my_arr[j + 1] = my_arr[j];
				my_arr[j] = aux;
				i = 0;
			}
		}
		if (my_arr[size - 1] == my_arr[size - 2]) {
			size--;
			i--;
		}
	}
	for (int i = 0; i < size - 1; i++)
	{
		put_nbr(my_arr[i]);
		write(1, "-", 1);
	}
}

