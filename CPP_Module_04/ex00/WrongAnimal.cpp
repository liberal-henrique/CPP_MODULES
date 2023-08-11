/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:51:40 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 09:27:29 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "The WrongAnimal constructor was called." << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "Animal copy constructor was called." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "The WrongAnimal destructor was called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout
            << "The WrongAnimal's class member makeSound()"
            << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}


