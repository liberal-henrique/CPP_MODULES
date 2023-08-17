/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:27:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 15:17:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// AMateria* slots[4]; 

Character::Character() {
    std::cout << "Character was constroyed." << std::endl;
    for (int i = 0; i < 4; i++) {
        slots[i] = NULL;
    }
}

Character::Character(const Character& copy) {
    std::cout 
            << "Character was constroyed by copy constructor." 
            << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++) {
            this->slots[i] = copy.slots[i];
        }
    }
}

Character::~Character() {
    std::cout << "Character destroyed." << std::endl;
    for (int i = 0; i < 4; i++) {
        delete slots[i];
    }
}

Character& Character::operator=(const Character& copy) {
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++) {
            this->slots[i] = copy.slots[i];
        }
    }
    return (*this);
}

const std::string & Character::getName() const {
    
}

void Character::equip(AMateria* m) {}

void Character::unequip(int idx) {}

void Character::use(int idx, ICharacter& target) {}


