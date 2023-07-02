/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:18:41 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/02 22:48:51 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// You have to determine in what case it’s better to allocate
// the zombies on the stack or heap.

// Zombies must be destroyed when you don’t need them anymore. The destructor must
// print a message with the name of the zombie for debugging purposes

Zombie::Zombie() {

}

Zombie::~Zombie() {
	// how to localize among the objects create
	// which I should destroy
	// If my destructor can not receive parameter, how can I
	// print a message with the name of my zombie?
}

void	Zombie::SetName(std::string name) {
	this->name = name;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name) {
	Zombie	*newZombie = new Zombie;

	newZombie->SetName(name);
	return (newZombie);
}

void Zombie::randomChump( std::string name ) {
	Zombie	*newZombie = new Zombie;

	newZombie->SetName(name);
	announce();
	// esse zombie se autoinvocando deve ser
	// a deixar para responder a cena da alocacao de memoria
	
}

// Memory allocation, pointers to members,
// references, switch statement

// Read about smart Pointers

