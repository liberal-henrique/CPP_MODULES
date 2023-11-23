/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/02 11:46:48 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
	: AForm ("ShrubberyCreationForm", false, 145, 137) {
	std::cout 
			<< "The ShrubberyCreationForm constructor was called." 
			<< std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable) 
	: AForm(name, assign, grade_assingnable, grade_executable) {
		std::cout << "The ShrubberyCreationForm was created with all the content." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "The ShrubberyCreationForm destructor was called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
	: AForm ("ShrubberyCreationForm", false, 145, 137), target(copy.target)
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	
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