/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:47:33 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 15:24:52 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("") {
	std::cout << "The Character's constructor was called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = 0;
	for (int i = 0; i < 100000; i++)
		this->floor[i] = 0;
}

Character::Character(std::string const &name) : name(name) {
	std::cout << "The Character was created with a name." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = 0;
	for (int i = 0; i < 100000; i++)
		this->floor[i] = 0;
}

Character::Character(const Character& copy) {
	std::cout << "The Character's copy constructor was Called" << std::endl;
	*this = copy;
}

Character::~Character() {
	std::cout << "The Character's destructor was Called" << std::endl;	
	for (int i = 0; i < 4; i++)
		if (stock[i])
			delete(stock[i]);
	for (int i = 0; i < 100000; i++)
		if (floor[i])
			delete(floor[i]);
}

Character & Character::operator=(const Character &copy) {
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++) {
			delete(stock[i]);
			stock[i] = copy.stock[i]->clone();
		}
		for (int i = 0; i < 100000; i++) {
			delete(floor[i]);
			floor[i] = copy.floor[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);	
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!stock[i] && m)
		{
			std::cout 
					<< "The Character was equipped" 
					<< std::endl;
			this->stock[i] = m;
			m->equipped = 1;
			break ;
		}
		if (i == 3)
			for (int j = 0; j < 100000; j++)
			{
				if (floor[j] == 0) {
					floor[j] = m;
					break;	
				}		
			}
	}
	
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 4) {
		std::cout << "The idx is not available." << std::endl;
		return ;
	}
	if (stock[idx]) {
		std::cout 
			<< "The Character was removed" 
			<< std::endl;
		this->stock[idx]->equipped = 0;
		floor[idx] = stock[idx];
		stock[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 4) {
		std::cout << "The idx is not available." << std::endl;
		return ;
	}
	if (!stock[idx])
		std::cout << "This materia doesn't exist." << std::endl;
	else if (stock[idx]->getType() == "ice") {	
		std::cout 
				<< "* shoots an "
				<< stock[idx]->getType()
				<< " bold at "
				<< target.getName()
				<< " *"
				<< std::endl;
	}
	else if (stock[idx]->getType() == "cure") {
		std::cout
				<< "* heals "
				<< target.getName()
				<< " wounds *"
				<< std::endl;
	}
}
