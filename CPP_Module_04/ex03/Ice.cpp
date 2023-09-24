/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:16:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 19:40:12 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "The ice constructor was called." << std::endl;
}

Ice::Ice(const Ice &copy) {
	std::cout << "The ice copy constructor was called." << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "The ice destrutor was called." << std::endl;
}

Ice & Ice::operator=(const Ice &copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string const & Ice::getType() const {
	return (this->type);
}

Ice* Ice::clone() const {
	return (new Ice());
}