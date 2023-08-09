/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:40 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/09 19:20:37 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : to_store(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &copy)
		this->setRawBits(copy.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->to_store);
}

void	Fixed::setRawBits(int const raw) {
	this->to_store = raw;
}
