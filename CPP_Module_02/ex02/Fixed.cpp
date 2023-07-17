/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:00:50 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/17 21:08:04 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::fractional = 8;

Fixed::Fixed() : to_store(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param) : to_store(0) {
	this->setRawBits(param << fractional);
}

Fixed::Fixed(const float num) {
	this->setRawBits(roundf(num * (1 << fractional)));
}

Fixed::Fixed(const Fixed &copy) {
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

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &copy)
		this->to_store = copy.getRawBits();
	return (*this);
}

static Fixed &Fixed::function_min(Fixed &element1, Fixed &element2) {
	if (element1.value() <= element2.value())
		return (element1.value());
	return (element2.value());
}

static Fixed &Fixed::function_min(const Fixed &element1, const Fixed &element2) {
	if (element1.value() <= element2.value())
		return (element1.value());
	return (element2.value());
}

static Fixed &Fixed::function_max(Fixed &element1, Fixed &element2) {
	if (element1.value() >= element2.value())
		return (element1.value());
	return (element2.value());
}

static Fixed &Fixed::function_max(const Fixed &element1, const Fixed &element2) {
	if (element1.value() >= element2.value())
		return (element1.value());
	return (element2.value());
}

// Operators comparison
bool	Fixed::operator>(const Fixed &fixed) {
	return (getRawBits() > fixed);
}

bool	Fixed::operator<(const Fixed &fixed) {
	return (getRawBits() < fixed);
}

bool	Fixed::operator>=(const Fixed &fixed) {
	return (getRawBits() >= fixed);
}

bool	Fixed::operator<=(const Fixed &fixed) {
	return (getRawBits() >= fixed);
}

bool	Fixed::operator==(const Fixed &fixed) {
	return (getRawBits() >= fixed);
}

bool	Fixed::operator!=(const Fixed &fixed) {
	return (getRawBits() >= fixed);
}

// arithmetic operator

Fixed &Fixed::operator+(const Fixed &element1, const Fixed &element2) {
	Fixed res;
	res = element1.value() + element2.value();
	return (res);
}

Fixed &Fixed::operator-(const Fixed &fixed) {
	Fixed res;
	res = element1.value() - element2.value();
	return (res);
}

Fixed &Fixed::operator*(const Fixed &fixed) {
	Fixed res;
	res = element1.value() * element2.value();
	return (res);
}

Fixed &Fixed::operator/(const Fixed &fixed) {
	Fixed res;
	res = element1.value() / element2.value();
	return (res);
}

// pre-increment
Fixed &Fixed::operator++() {
	this->getRawBits() += (1 << fractional);
	return (*this);
}

// post-increment
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

//pre-decrement
Fixed &Fixed::operator--() {
	this->getRawBits() -= (1 << fractional);
	return (*this);
}

//post-decrement
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}
