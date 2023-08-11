/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:11:33 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout
			<< "Dog constructor was called."
			<< std::endl;
	this->type = "dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& copy) {
	std::cout
			<< "Dog copy constructor was called."
			<< std::endl;
	this->brain = new Brain();
	*this = copy;
}

Dog::~Dog() {
    std::cout << "Dog destructor." << std::endl;
    delete brain;
}

Dog& Dog::operator=(const Dog& copy) {
	if (this != &copy)
	{
		this->type = copy.type;
		delete brain;
		this->brain = new Brain(*(copy.brain));
	}
	return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!!" << std::endl;
}

void Dog::getIdeas() {
    this->brain->showIdeas();
}

void Dog::setIdea(std::string idea) {
    this->brain->setIdeas(idea);
}
