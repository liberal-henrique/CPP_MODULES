/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 09:20:21 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout
            << "Dog constructor was called."
            << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout
            << "Dog copy constructor was called."
            << std::endl;
    *this = copy;
}

Dog::~Dog() {
    std::cout << "Dog destructor was called." << std::endl;
}

Dog& Dog::operator=(const Dog&copy) {
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!!" << std::endl;
}
