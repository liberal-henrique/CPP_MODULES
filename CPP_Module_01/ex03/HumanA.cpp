/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:05:33 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 15:54:08 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &object) : _weapon(&object) {
	std::cout << "Default constructor just with weapon." << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &object)
: _name(name), _weapon(&object) {
	std::cout << "Constructor with name and weapon." << std::endl;
}

HumanA::~HumanA(){}

void	HumanA::attack() {
	std::cout << getName() << " attacked with ";
	std::cout << this->_weapon->getType() << std::endl;
}

std::string	HumanA::getName() {
	return (this->_name);
}

void	HumanA::setName(std::string name) {
	this->_name = name;
}
