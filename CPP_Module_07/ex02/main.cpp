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

#include "Array.hpp"

int main(void) {
	Array<int>  a;

	std::cout << a.size() << std::endl;
	try {
		std::cout << "a[0] = ";
		std::cout << a[0] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
