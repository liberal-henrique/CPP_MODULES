/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:35:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 09:56:46 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	reverse_recursive(int *arr, int aux, int i, int size) {
	if (size == i)
		return ;
	aux = arr[i];
	arr[i] = arr[size - 1];
	arr[size - 1] = aux;
	reverse_recursive(arr, 0, i + 1, size - 1);
}


int main(void) {
	int my_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(my_arr) / sizeof(my_arr[0]);

	reverse_recursive(my_arr, 0, 0, size);
	for (int i = 0; i < (size); i++) {
		printf("%d", my_arr[i]);
	}
}
