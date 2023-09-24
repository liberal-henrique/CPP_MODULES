/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:22:29 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 21:38:14 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "The AMateria constructor was called." << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
	std::cout << "The AMateria copy constructor was called." << std::endl;
	*this = copy;
}

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "The AMateria was created with a specific type." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "The AMateria destructor was called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);	
}
