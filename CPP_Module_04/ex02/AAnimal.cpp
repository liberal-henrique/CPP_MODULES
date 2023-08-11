/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 12:53:20 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "The animal constructor was called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) {
    std::cout << "Animal copy constructor was called." << std::endl;
    *this = copy;
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor was called." << std::endl;
}


AAnimal& AAnimal::operator=(const AAnimal& copy) {
    std::cout << "Animal's operator overload was called." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void AAnimal::makeSound() const {
    std::cout
            << "The Animal's class member makeSound()"
            << std::endl;
}

std::string AAnimal::getType(void) const {
    std::cout
            << "The Animal's getType() was called."
            << std::endl;
    return (this->type);
}
