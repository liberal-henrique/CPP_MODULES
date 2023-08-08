/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:06:13 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/08 16:21:26 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon created with default constructor." << std::endl;
}

Weapon::Weapon(const std::string &kind) : _type(kind) {
	std::cout << "Weapon created with a type" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "The Weapon were destroyed." << std::endl;
}

const std::string &Weapon::getType() {
	std::cout << "The type was getted." << std::endl;
	return (this->_type);
}

void	Weapon::setType(std::string name) {
	std::cout << "The type was updated to " << name << std::endl;
	this->_type = name;
}
