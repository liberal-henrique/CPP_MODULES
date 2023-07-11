/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:18:41 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/03 17:37:15 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):_ZombieName(name) {}

Zombie::~Zombie() {
	std::cout << "The Zombie " << this->_ZombieName << " was destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_ZombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
