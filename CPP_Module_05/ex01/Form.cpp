/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:54 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 13:55:36 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : 
			_name(""), 
			_assign(false), 
			_grade_assingnable(150), 
			_grade_executable(150) 
{
	std::cout 
			<< "The default constructor was called." 
			<< std::endl;	
}


Form::Form(const std::string &name, bool assign, int grade_assingnable, int grade_executable) :
_name(name), _assign(assign), _grade_assingnable(grade_assingnable), _grade_executable(grade_executable){
		if (grade_assingnable < 1 || grade_executable < 1)
			throw GradeTooHighException();
		else if (grade_assingnable > 150 || grade_executable > 150)
			throw GradeTooLowException();
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
	if (officer.getGrade() > this->_grade_assingnable)
		throw GradeTooLowException();
	else {
		this->_assign = true;
		std::cout 
				<< this->_name 
				<< " was assigned." 
				<< std::endl;
	}
}

bool Form::getAssign() {
	return (this->_assign);
}

std::string const & Form::getName(void) {
	return (this->_name);
}

int const & Form::getGradeAssingnable(void)  {
	return (this->_grade_assingnable);
}

int const & Form::getGradeExecutable(void)  {
	return (this->_grade_assingnable);
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

const char * Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high.");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low.");
}
