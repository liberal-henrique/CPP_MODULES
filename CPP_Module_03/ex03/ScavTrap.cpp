/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 13:42:14 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout
			<< "The ScavTrap's deafault constructor was called."
			<< std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name) {
	this->Attack = 20;
	this->Energy = 50;
	this->HitPoints = 100;
	std::cout << "ScavTrap is alive!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap is dying!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
	std::cout
			<< "ScavTrap has a operator overload."
			<< std::endl;
	if (this != &copy) {
		this->name = copy.name;
		this->HitPoints = copy.HitPoints;
		this->Energy = copy.Energy;
		this->Attack = copy.Attack;
	}
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap() {
	std::cout
			<< "ScavTrap's copy constructor was called"
			<< std::endl;
	*this = copy;
}

void ScavTrap::attack(const std::string& target) {
	if (this->HitPoints <= 0 || this->Energy <= 0)
		std::cout << this->getName() << " has no Hit points or energy anymore." << std::endl;
	else
	{
		this->Energy--;
		std::cout
					<< this->getName()
					<< " attacks "
					<< target
					<< ", causing "
					<< this->getDamegeAttack()
					<< " points of damage."
					<< std::endl;
	}
}

std::string ScavTrap::getName() {
	return (this->name);
}

int ScavTrap::getDamegeAttack() const {
	return (this->Attack);
}

void	ScavTrap::guardGate() {
	std::cout << this->getName() << " is now in gate keeper mode." << std::endl;
}
