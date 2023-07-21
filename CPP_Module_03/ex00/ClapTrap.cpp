/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/21 18:21:50 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "The deafault constructor called." << std::endl;
	this->Attack = 0;
	this->HitPoints = 100;
	this->Energy = 100;
}

ClapTrap::ClapTrap(std::string Name) {
	this->setName(Name);
	this->Attack = 0;
	this->HitPoints = 100;
	this->Energy = 100;
	std::cout << "The constructor with name called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "The deafault destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	this->HitPoints -= 1;
	std::cout << this->getName() << " attacks " << target << " , causing 1 point points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->HitPoints -= amount;
	std::cout << this->getName() << " were attacked now " << this->getEnergy() << " total hit points." << std::endl;
}

void	ClapTrap::beRapaired(unsigned int amount) {
	this->HitPoints -= 1;
	this->HitPoints += amount;
}

std::string	ClapTrap::getName(void) {
	return (this->Name);
}

void	ClapTrap::setName(std::string NewName) {
	this->Name = NewName;
}

int	ClapTrap::getHitPoints(void) {
	return (this->HitPoints);
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	this->HitPoints = amount;
}

int	ClapTrap::getEnergy(void) {
	return (this->Energy);
}

void	ClapTrap::setEnergy(unsigned int amount) {
	this->Energy = amount;
}



