/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:00:50 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/09 20:23:35 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::fractional = 8;

Fixed::Fixed() : to_store(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param) {
	this->setRawBits(param << fractional);
}

Fixed::Fixed(const float num) {
	this->setRawBits(roundf(num * (1 << fractional)));
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
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

Fixed& Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &copy)
		this->to_store = copy.getRawBits();
	return (*this);
}

Fixed& Fixed::min(Fixed &element1, Fixed &element2) {
	if (element1.getRawBits() <= element2.getRawBits())
		return (element1);
	return (element2);
}

const Fixed& Fixed::min(const Fixed &element1, const Fixed &element2) {
	if (element1.getRawBits() <= element2.getRawBits())
		return (element1);
	return (element2);
}

Fixed& Fixed::max(Fixed &element1, Fixed &element2) {
	if (element1.getRawBits() >= element2.getRawBits())
		return (element1);
	return (element2);
}

const Fixed &Fixed::max(const Fixed &element1, const Fixed &element2) {
	if (element1.getRawBits() >= element2.getRawBits())
		return (element1);
	return (element2);
}

// Operators comparison
bool	Fixed::operator>(const Fixed &fixed) {
	std::cout << "The operator > overload called." << std::endl;
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) {
	std::cout << "The operator < overload called." << std::endl;
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) {
	std::cout << "The operator >= overload called." << std::endl;
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) {
	std::cout << "The operator <= overload called." << std::endl;
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) {
	std::cout << "The operator == overload called." << std::endl;
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) {
	std::cout << "The operator != overload called." << std::endl;
	return (this->getRawBits() != fixed.getRawBits());
}

// arithmetic operator
Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

// pre-increment
Fixed &Fixed::operator++() {
	this->to_store++;
	return (*this);
}

// post-increment
Fixed Fixed::operator++(int) {
	Fixed tmp(toFloat());
	this->to_store++;
	return (tmp);
}

//pre-decrement
Fixed &Fixed::operator--() {
	this->to_store--;
	return (*this);
}

//post-decrement
Fixed Fixed::operator--(int) {
	Fixed tmp(toFloat());
	this->to_store--;
	return (tmp);
}
