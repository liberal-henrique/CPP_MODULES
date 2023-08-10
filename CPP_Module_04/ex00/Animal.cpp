/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 17:30:01 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "The animal constructor was called." << std::endl;
}

Animal::Animal(std::string type_received) : type(type_received) {
    std::cout << "The animal constructor was called." << std::endl;
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal copy constructor was called." << std::endl;
    *this = copy;
}

Animal::~Animal() {}

Animal& Animal::operator=(const Animal& copy) {
    std::cout << "Animal's operator overload was called." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void Animal::makeSound() const {
    std::cout
            << "The Animal's class member makeSound()"
            << std::endl;
}

std::string Animal::getType(void) const {
    std::cout
            << "The Animal's getType() was called."
            << std::endl;
    return (this->type);
}
