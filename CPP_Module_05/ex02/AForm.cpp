/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:55:42 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 15:55:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
	: name(""), assign(false), grade_assingnable(150), grade_executable(150) {
	std::cout 
			<< "The default constructor was called." 
			<< std::endl;	
}

AForm::AForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable) :
	name(name), assign(assign), grade_assingnable(grade_assingnable), grade_executable(grade_executable) {
		std::cout << "The AForm was created with all the content." << std::endl;
}

AForm::AForm(const AForm & copy) 
	: name(copy.name), assign(false), grade_assingnable(copy.grade_assingnable), grade_executable(copy.grade_executable) {
	std::cout 
			<< "The copy constructor was called." 
			<< std::endl;
	*this = copy;
}

AForm::~AForm() {
	std::cout 
			<< "The default destructor was called."
			<< std::endl;
}

AForm& AForm::operator=(const AForm& copy) {
	this->assign = copy.getAssign();
	return (*this);
}

void AForm::beSigned(Bureaucrat& officer) {
	if (officer.getGrade() > this->grade_assingnable)
		throw GradeTooLowException();
	else {
		this->assign = true;
		std::cout << this->name << " was assigned." << std::endl;
	}
}

bool AForm::getAssign() const {
	return (this->assign);
}

std::string const & AForm::getName(void) {
	return (this->name);
}

int const & AForm::getGradeAssingnable(void)  {
	return (this->grade_assingnable);
}

int const & AForm::getGradeExecutable(void)  {
	return (this->grade_assingnable);
}

void AForm::checkGrade(int grade_assingnable, int grade_executable)
{
	if (grade_assingnable < 1 || grade_executable < 1)
		throw GradeTooHighException();
	else if (grade_assingnable > 150 || grade_executable > 150)
		throw GradeTooLowException();
}

const char * AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high.");
}

const char * AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low.");
}

const char * AForm::FormIsNotAssigned::what() const throw() {
	return ("Form is not assigned.");
}

void AForm::execute(Bureaucrat const & executor) const {
	if (!assign)
		throw FormIsNotAssigned();
	if (executor.getGrade() > grade_executable)
		throw GradeTooLowException();
	DIY();
}

std::ostream& operator<<(std::ostream& content, AForm& i) {
	content << "Name: " << i.getName() << ", Bureaucrat grade " << i.getGradeAssingnable();
	return (content);
}
