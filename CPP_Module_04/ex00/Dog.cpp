/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/11 12:45:28 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout 
            << "Dog constructor was called." 
            << std::endl;
}

Dog::Dog(const Dog& copy) {
    std::cout 
            << "Dog copy constructor was called." 
            << std::endl;
    *this = copy;
}

Dog::~Dog() {

}

Dog& Dog::operator=(const Dog&copy) {
    std::cout 
            << "The operator = was overloaded." 
            << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!!" << std::endl;
}

std::string Dog::getType() const {
    return (this->type);
}

