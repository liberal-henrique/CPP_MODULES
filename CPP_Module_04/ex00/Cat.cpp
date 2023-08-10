/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 17:29:31 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout
            << "Cat constructor was called."
            << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout
            << "Cat copy constructor was called."
            << std::endl;
    *this = copy;
}

Cat::~Cat() {
        std::cout
            << "Cat destructor."
            << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
    std::cout
            << "The operator = was overloaded."
            << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meows!!" << std::endl;
}

std::string Cat::getType() const {
    std::cout
            << "The cat's getType() was called."
            << std::endl;
    return (this->type);
}
