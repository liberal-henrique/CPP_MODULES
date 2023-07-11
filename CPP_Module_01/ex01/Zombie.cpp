/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:32:34 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/04 13:47:01 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << "The Horde Zombie " << this->_zombieName << " was destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_zombieName = name;
}
