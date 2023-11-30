/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:34 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 12:52:24 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm ("RobotomyRequestForm", false, 72, 45), _target("default") {
		std::cout 
				<< "The RobotomyRequestForm constructor was called." 
				<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: AForm ("RobotomyRequestForm", false, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) {
	std::cout << "The copy constructor was called." << std::endl;
	this->_target = copy.getTarget();
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	this->_target = copy.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "The destructor was called." << std::endl;
}

std::string const 	RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void RobotomyRequestForm::setTarget(std::string target) {
	_target = target;
}

void RobotomyRequestForm::DIY() const {
	std::srand(static_cast<unsigned>(std::time(0)));
	double num = static_cast<double>(rand()) / RAND_MAX;

	std::cout << "DRILLLLLLLL DRILLLLLL" << std::endl;
	if (num < 0.5) {
		std::cout 
				<< "The " 
				<< this->getTarget() 
				<< " was robotomized." 
				<< std::endl;
	}
	else {
		std::cout 
				<< "The robotomized failed." 
				<< std::endl;
	}
	std::cout << "Rand: " << std::setprecision(1) << num << std::endl;
}
