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
		<< "Diamond's default constructor was called."
		<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
	std::cout
		<< "Diamond was created with a name."
		<< std::endl;
	FragTrap::HitPoints = 100;
	FragTrap::Attack = 30;
	Energy = ScavTrap::Energy;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
	std::cout << "The constructor copy." << std::endl;
	this->name = copy.name;
	this->HitPoints = copy.HitPoints;
	this->Energy = copy.Energy;
	this->Attack = copy.Attack;
	// *this = copy is the same
}
DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond destructor was called." << std::endl;
}

std::string	DiamondTrap::getName(void) {
	return (this->name);
}

void DiamondTrap::whoAmI() {
	std::cout 
			<< this->getName() 
			<< " this is the Diamond's name." 
			<< std::endl
			<< ClapTrap::getName()
			<< " this is the Diamond's name." 
			<< std::endl;
}
