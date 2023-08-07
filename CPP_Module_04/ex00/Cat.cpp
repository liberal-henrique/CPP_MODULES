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

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor was called." << std::endl;
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor was called." << std::endl;
    *this = copy;
}

Cat::~Cat() {}

Cat& Cat::operator=(const Cat& copy) {
    std::cout << "The operator = was overloaded." << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meows!!" << std::endl;
}

std::string Cat::getType() const {
    return (this->type);
}
