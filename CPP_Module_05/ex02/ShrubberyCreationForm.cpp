/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 11:32:53 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
	: AForm ("ShrubberyCreationForm", false, 145, 137), _target("default")
{
	std::cout 
			<< "The ShrubberyCreationForm constructor was called." 
			<< std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
		: AForm ("ShrubberyCreationForm", false, 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout 
			<< "The ShrubberyCreationForm destructor was called." 
			<< std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy) 
{
	this->_target = copy.getTarget();
	return (*this);
}


std::string	ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

void ShrubberyCreationForm::setTarget(std::string target) {
	this->_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getAssign())
}



//        _-_
//     /~~   ~~*
//  /~~         ~~*
// {               }
//  \  _-     -_  /
//    ~  \\ //  ~
// _- -   ||| _- _
//   _ -  |||   -_
//       // //