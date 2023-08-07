/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 14:44:24 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout
		<< "The FragTrap's deafault constructor was called."
		<< std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	this->Attack = 30;
	this->Energy = 100;
	this->HitPoints = 100;
	std::cout
			<< "FragTrap is alive!"
			<< std::endl;
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

void FragTrap::attack(const std::string& target) {
	if (this->HitPoints <= 0 || this->Energy <= 0)
		std::cout
				<< this->getName()
				<< " has no Hit points or energy anymore."
				<< std::endl;
	else
	{
		this->Energy--;
		std::cout
					<< this->getName()
					<< " attacks "
					<< target
					<< ", causing "
					<< this->getAttackDamage()
					<< " points of damage."
					<< std::endl;
	}
}

FragTrap&	FragTrap::operator=(const FragTrap& copy) {
	std::cout
			<< "FragTrap has a operator overload."
			<< std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->Energy = copy.Energy;
		this->HitPoints = copy.HitPoints;
		this->Attack = copy.Attack;
	}
	return (*this);
}

int	FragTrap::getAttackDamage() const {
	return (this->Attack);
}

void FragTrap::highFivesGuys(void) {
	std::cout
			<< "Hi five Guys!!"
			<< std::endl;
}
