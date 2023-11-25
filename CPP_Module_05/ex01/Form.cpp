/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:54 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 15:38:20 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : 
			name(""), 
			assign(false), 
			grade_assingnable(150), 
			grade_executable(150) 
{
	std::cout 
			<< "The default constructor was called." 
			<< std::endl;	
}

Form::Form(const std::string &name, bool assign, int grade_assingnable, int grade_executable) :
	name(name), assign(assign), grade_assingnable(grade_assingnable), grade_executable(grade_executable) {
		std::cout 
				<< "The form was created with all the content." 
				<< std::endl;
}

Form::~Form() {
	std::cout 
			<< "The default destructor was called."
			<< std::endl;
}

void Form::beSigned(Bureaucrat& officer) {
	if (officer.getGrade() > this->grade_assingnable)
		throw GradeTooLowException();
	else {
		this->assign = true;
		std::cout 
				<< this->name 
				<< " was assigned." 
				<< std::endl;
	}
}

bool Form::getAssign() {
	return (this->assign);
}

std::string const & Form::getName(void) {
	return (this->name);
}

int const & Form::getGradeAssingnable(void)  {
	return (this->grade_assingnable);
}

int const & Form::getGradeExecutable(void)  {
	return (this->grade_assingnable);
}

void Form::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& content, Form& i) {
	content 
		<< "Name: " 
		<< i.getName() 
		<< ", Bureaucrat grade " 
		<< i.getGradeAssingnable();
	return (content);
}
