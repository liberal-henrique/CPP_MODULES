/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:56:07 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 21:10:01 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "The Cure constructor was called." << std::endl;
}

Cure::Cure(const Cure & copy) {
	std::cout << "The Cure copy constructor was called." << std::endl;
	*this = copy; 
}

Cure::~Cure() {
	std::cout << "The Cure destructor was called." << std::endl;
}

Cure & Cure::operator=(const Cure & assign) {
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

std::string const & Cure::getType() const {
	return (this->type);
}

Cure* Cure::clone() const {
	return (new Cure());
}