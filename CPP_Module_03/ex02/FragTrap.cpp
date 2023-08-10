/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/27 18:20:50 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout 
			<< "FragTrap's deafault constructor was called."
			<< std::endl;
	this->Attack = 30;
	this->Energy = 100;
	this->HitPoints = 100;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	std::cout 
			<< "FragTrap was created by the Constructor with a name!" 
			<< std::endl;
	this->Attack = 30;
	this->Energy = 100;
	this->HitPoints = 100;
}

FragTrap::FragTrap(const FragTrap& copy) {
	std::cout 
			<< "FragTrap's copy constructor was called" 
			<< std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout 
			<< "FragTrap is already destroyed!" 
			<< std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy) {
	std::cout 
			<< "FragTrap has a operator overload."
			<< std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		this->Energy = copy.Energy;
		this->HitPoints = copy.HitPoints;
		this->Attack = copy.Attack;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout 
			<< "(FragTrap) Let's celebrate with a high-five!"
			<< std::endl;
}
