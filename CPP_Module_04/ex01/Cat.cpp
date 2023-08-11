/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:28:43 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout
            << "Cat constructor was called."
            << std::endl;
    this->type = "cat";
    this->brain = new Brain();
}

// Cat::Cat() : brain(new Brain()) {
//     std::cout
//             << "Cat constructor was called."
//             << std::endl;
//     this->type = "cat";
// }

Cat::Cat(const Cat& copy) {
    std::cout
            << "Cat copy constructor was called."
            << std::endl;
    this->brain = new Brain();
    *this = copy;
}

Cat::~Cat() {
    std::cout << "Cat destructor." << std::endl;
    delete brain;
}

Cat& Cat::operator=(const Cat& copy) {
    if (this != &copy)
    {
        this->type = copy.type;
        delete brain;
		this->brain = new Brain(*(copy.brain));
    }
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meows!!" << std::endl;
}

void Cat::getIdeas() {
    this->brain->showIdeas();
}

void Cat::setIdea(std::string idea) {
    this->brain->setIdeas(idea);
}

