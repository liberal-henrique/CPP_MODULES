/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_average.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:13:07 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 16:43:59 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// int main(void) {
// 	int my_arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
// 	int size = sizeof(my_arr) / sizeof(my_arr[0]);
// 	int sum = 0;

// 	for (int i = 0; i < size; i++)
// 		sum += my_arr[i];
// 	printf("The average is: %d\n", sum/size);
// }



int	average_recursive(int *arr, int size) {
	if (size == 0)
		return (0);
	else {
		int	sum = arr[size - 1] + average_recursive(arr, size - 1);
		return (sum);
	}
}

int main(void) {
	int my_arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = sizeof(my_arr) / sizeof(my_arr[0]);

	printf("The average is: %i\n", average_recursive(my_arr, size) / size);
}


