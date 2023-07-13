/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array_intergers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:21:47 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 15:35:37 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void) {
	int my_arr[5] = {5, 4, 3, 2, 1};
	int size = sizeof(my_arr) / sizeof(my_arr[0]);
	char aux;

	for (int i = 0; i < (size - 1); i++) {
		for (int j = 0; j < (size - 1); j++) {
			if (my_arr[j] > my_arr[j + 1])
			{
				aux = my_arr[j];
				my_arr[j] = my_arr[j + 1];
				my_arr[j + 1] = aux;
			}
		}
	}
	int i = 0;
	while (i < (size)) {
		printf("%d", my_arr[i++]);
	}
}
