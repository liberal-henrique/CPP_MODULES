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

ClapTrap::ClapTrap() : HitPoints(10), Energy(10), Attack(0) {
	std::cout << "The deafault constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string& Name) : Name(Name), HitPoints(10), Energy(10), Attack(0) {
	std::cout << this->getName() << " was created." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->getName() << " claptrap was destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->HitPoints <= 0 || this->Energy <= 0)
		std::cout << this->getName() << " has no Hit points or energy anymore." << std::endl;
	else
	{
		this->Energy -= 1;
		std::cout << this->getName()
				  << " attacks " 
				  << target 
				  << ", causing " 
				  << this->Attack
				  << " points of damage!" 
				  << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoints > 0)
	{
		this->HitPoints -= amount;
		std::cout << this->getName() << " were attacked now " << this->HitPoints << " total hit points." << std::endl;
	}
}

void	ClapTrap::beRapaired(unsigned int amount) {
	if (this->HitPoints <= 0 || this->Energy <= 0)
		std::cout << this->getName() << " has no Hit points or energy anymore." << std::endl;
	else
	{
		this->Energy -= 1;
		this->HitPoints += amount;
		std::cout << this->getName() << " repairs itself, it gets " << this->HitPoints << " hit points back." << std::endl;
	}
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
	std::cout << this->getName() << " has " << this->Energy << " points of energy." << std::endl;
	return (this->Energy);
}

void	ClapTrap::setEnergy(unsigned int amount) {
	this->Energy = amount;
}

int	ClapTrap::getDamageAttack(void) const {
	return this->Attack;
}

void	ClapTrap::setDamageAttack(int Attack) {
	this->Attack = Attack;
}


