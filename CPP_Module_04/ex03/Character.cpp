/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:47:33 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 22:21:10 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("") {
	std::cout << "The Character's constructor was called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = 0;
}

Character::Character(std::string const & name) : name(name) {
	std::cout << "The Character was created with a name." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = 0;
}

Character::Character(const Character& copy) {
	std::cout << "The Character's copy constructor was Called" << std::endl;
	*this = copy;
}

Character::~Character() {
	std::cout << "The Character's destructor was Called" << std::endl;	
	for (int i = 0; i < 4; i++)
		if (this->stock[i])
			delete(this->stock[i]);
}

Character & Character::operator=(const Character &copy) {
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++) {
			delete(stock[i]);
			stock[i] = copy.stock[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	std::cout 
			<< "The Character is called "
			<< this->name 
			<< std::endl;
	return (this->name);	
}

void Character::equip(AMateria* m) {
	std::cout << "The Character was equipped" << std::endl;	
	for (int i = 0; i < 4; i++) {
		if (!stock[i])
			stock[i] = m;
	}
}

void Character::unequip(int idx) {
	std::cout << "" << std::endl;	
}

void Character::use(int idx, ICharacter& target) {
	std::cout << "" << std::endl;	
}

void Character::print_stock() {
	std::cout << "" << std::endl;	
}
