/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:06:13 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 13:52:41 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon created with default constructor." << std::endl;
}

Weapon::Weapon(const std::string &kind) : _type(kind) {
	std::cout << "Weapon created with a type" << std::endl;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string name) {
	this->_type = name;
}
