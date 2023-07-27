/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/27 18:34:32 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "The deafault ass constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name) {
	this->Attack = 20;
	this->Energy = 50;
	this->HitPoints = 100;

	std::cout << "It's alive!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "I'm dying!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << "operator overload." << std::endl;
	if (this != &copy) {
		this->Name = copy.Name;
		this->HitPoints = copy.HitPoints;
		this->Energy = copy.Energy;
		this->Attack = copy.Attack;
	}
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap() {
	std::cout << "Copy constructor" << std::endl;
	*this = copy;
}
