/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum_element_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:04:59 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/13 10:10:11 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void) {
	int my_arr[100] = {9, 8, 7, 6, 33, 2, 1, 12, 30, 211, 22, 23, 24, 25};
	int size = sizeof(my_arr) / sizeof(my_arr[0]);
	int max = my_arr[0];

	for (int i = 0; i < size; i++) {
		if (max < my_arr[i + 1])
			max = my_arr[i + 1];
	}
	printf("%d\n", max);
}
