/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/27 17:58:12 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "The deafault constructor called." << std::endl;
	this->Attack = 0;
	this->HitPoints = 10;
	this->Energy = 10;
}

ClapTrap::ClapTrap(std::string Name) {
	std::cout << "The constructor with name called." << std::endl;
	this->Name = Name;
	this->Attack = 0;
	this->HitPoints = 10;
	this->Energy = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "The constructor copy." << std::endl;
	this->Name = copy.Name;
	this->Attack = copy.Attack;
	this->HitPoints = copy.HitPoints;
	this->Energy = copy.Energy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		this->Attack = copy.Attack;
		this->HitPoints = copy.HitPoints;
		this->Energy = copy.Energy;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap was destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->HitPoints <= 0 || this->Energy <= 0)
	{
		std::cout 
				<< "ClapTrap has no Hit points or energy anymore." 
				<< std::endl;
	}
	else
	{
		this->Energy -= 1;
		std::cout 
				<< "Claptrap attacks "
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
		std::cout << "Claptrap were attacked now " << this->HitPoints << " total hit points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints <= 0 || this->Energy)
	{
		std::cout 
				<< "Claptrap has no Hit points or energy anymore." 
				<< std::endl;
	}
	else
	{
		this->Energy -= 1;
		this->HitPoints += amount;
		std::cout 
				<< "Claptrap repairs itself, it gets " 
				<< this->HitPoints 
				<< " hit points back." 
				<< std::endl;
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
	std::cout 
			<< "Claptrap has " 
			<< this->Energy 
			<< " points of energy." 
			<< std::endl;

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


