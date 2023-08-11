/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:36:05 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 09:39:36 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout
		<< "WrongCat constructor was called."
		<< std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) {
	std::cout
		<< "WrongCat copy constructor was called."
		<< std::endl;
	*this = copy;
}

WrongCat::~WrongCat() {
	std::cout
		<< "WrongCat destructor was called."
		<< std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

