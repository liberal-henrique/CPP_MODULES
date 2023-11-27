/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:31 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 14:21:48 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() 
	: AForm ("PresidentialPardonForm", false, 25, 5), _target("default") {
	std::cout 
		<< "The PresidentialPardonForm constructor was called." 
		<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: AForm ("PresidentialPardonForm", false, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) {
	std::cout << "The copy constructor was called." << std::endl;
	this->_target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "The destructor was called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
	this->_target = copy.getTarget();
	return (*this);
}

std::string const 	PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void PresidentialPardonForm::setTarget(std::string target) {
	_target = target;
}

void PresidentialPardonForm::DIY() const {
	std::cout 
			<< this->getTarget() 
			<< " was pardoned by Zaphod Beeblebrox." 
			<< std::endl;
}
