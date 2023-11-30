/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/29 14:32:11 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
	: AForm ("ShrubberyCreationForm", false, 145, 137), _target("default") {
	std::cout 
			<< "The ShrubberyCreationForm constructor was called." 
			<< std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
		: AForm ("ShrubberyCreationForm", false, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) {
	std::cout << "The copy constructor was called." << std::endl;
	this->_target = copy.getTarget();
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout 
			<< "The ShrubberyCreationForm destructor was called." 
			<< std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy) {
	this->_target = copy.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::setTarget(std::string target) {
	this->_target = target;
}

void	ShrubberyCreationForm::DIY() const {
	std::string fileName = _target + "_shrubbery";
	std::ofstream outfile(fileName.c_str(), std::ofstream::trunc);
	if (!outfile) {
		outfile.close();
		throw FormIsNotAssigned(this);
		return ;
	}

	const char * treeParts[] = {
		"        _-_",
		"     /~~   ~~*",
		"  /~~         ~~*",
		" {               }",
		"  /  _-     -_  /",
		"    ~  \\ //  ~",
		" _- -   ||| _- _",
		"   _ -  |||   -_",
		"       // //",
	};
	for (unsigned long i = 0; i < sizeof(treeParts) / sizeof(treeParts[0]); i++)
		outfile << treeParts[i] << std::endl;
	outfile.close();
}
