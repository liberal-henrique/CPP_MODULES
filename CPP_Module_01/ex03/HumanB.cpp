/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:05 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/08 16:20:08 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(): _weapon(NULL) {}

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL) {
	std::cout << "Constructor defined with name." << std::endl;
}

HumanB::HumanB(const std::string &name, Weapon &object) : _name(name), _weapon(&object) {
	std::cout << "Constructor defined with name and weapon." << std::endl;
}

HumanB::~HumanB() {}

std::string HumanB::getName() {
	return (this->_name);
}

void	HumanB::attack() {
	std::cout << this->getName() << " attacked with ";
	std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setName(std::string name) {
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &object) {
	std::cout << "The Weapon were setted." << std::endl;
	this->_weapon = &object;
}
