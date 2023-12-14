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

#include "Easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T first, int second) {
	typename T::iterator it = std::find(first.begin(), first.end(), second);
	if (it != first.end())
		std::cout << "The elements is in " << it - first.begin() + 1 << " position." << std::endl;
	else
		throw elementNotFound();
	return (it);
};

int main(void) {
	std::cout << "testing..." << std::endl;
	std::vector<int> vec;
	for (int i = 1; i <= 20; i++) 
		vec.push_back(i * 10);
	try {
		easyfind(vec, 210);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
