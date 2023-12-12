/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 12:44:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void iter(T *arr, std::size_t len,  void(*func)(T &)) {
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}

template<typename T>
void printElement(T element) {
	std::cout << "The element is: " << element << std::endl;
}

template<typename T>
void addOne(T element) {
	element = element + 1;
	std::cout << "The element is: " << element << std::endl;
}



int main(void) {
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	const char *arr1[10] = {"aba", "eba", "iba", "oba", "uba", "aba", "eba", "iba", "oba", "uba"};

	iter(arr, 10, printElement);
	iter(arr1, 10, printElement);
	
	iter(arr, 10, addOne);
	iter(arr1, 10, addOne);
}
