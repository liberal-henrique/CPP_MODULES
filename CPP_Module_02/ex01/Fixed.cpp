/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:40 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/12 15:52:29 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::fractional = 8;

Fixed::Fixed() : to_store(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param) : to_store(0) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(param << fractional);
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num * (1 << fractional)));
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return (float)this->getRawBits() / (1 << this->fractional);
}

int		Fixed::toInt(void) const {
	return (this->getRawBits() >> fractional);
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &copy)
		this->to_store = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->to_store);
}

void	Fixed::setRawBits(int const raw) {
	this->to_store = raw;
}

std::ostream& operator<<(std::ostream &content, const Fixed &fixed) {
	content << fixed.toFloat();
	return (content);
}
