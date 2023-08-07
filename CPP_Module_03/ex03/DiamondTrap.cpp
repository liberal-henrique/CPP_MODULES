/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 19:59:10 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	std::cout
		<< "The Diamond's default constructor was called."
		<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
	std::cout
		<< " Diamondf was created with a name."
		<< std::endl;
	FragTrap::HitPoints = 100;
	FragTrap::Attack = 30;
	Energy = ScavTrap::Energy;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
	this->name = copy.name;
	this->HitPoints = copy.HitPoints;
	this->Energy = copy.Energy;
	this->Attack = copy.Attack;
	// *this = copy is the same
	std::cout << "The constructor copy." << std::endl;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor was called." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getName(void) {
	return (this->name);
}
