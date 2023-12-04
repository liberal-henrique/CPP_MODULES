/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:01 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 13:44:55 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : 
				name(""), 
				grade(default) 
{
	std::cout << "The constructor was called." << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
	std::cout << "The copy constructor was called." << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(const std::string& name,const int &grade) : 
						name(name)
{
	std::cout << "The constructor was called." << std::endl;
	checkGrade(grade);
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "The destructor was called." << std::endl;	
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& copy) {
	if (this == &copy)
		return (*this);
	checkGrade(copy.grade);
	this->setGrade(copy.grade);
	const_cast<std::string&>(this->name) = copy.name;
	return (*this);
}

std::string const & Bureaucrat::getName(void) {
	return (this->name);	
}

int const & Bureaucrat::getGrade(void) {
		return (this->grade);
}

void Bureaucrat::setGrade(int newGrade) {
	this->grade = newGrade;
}

void Bureaucrat::increment(void) {
	std::cout 
			<< "Let's increment the grade."
			<< std::endl;
	checkGrade(this->grade - 1);
	setGrade(--this->grade);
}

void Bureaucrat::decrement() {
	std::cout 
			<< "Let's decrement the grade."
			<< std::endl;
	checkGrade(this->grade + 1);
	setGrade(++this->grade);
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form) {
	try
	{
		// checkGrade(this->grade);
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		if (!form.getAssign()) {	
			form.beSigned(*this);
			std::cout 
					<< getName() 		
					<< " signed " 
					<< form.getName() 
					<< "." 
					<< std::endl;
		} else {
			std::cerr 
				<< this->getName() 
				<<  " couldn’t sign " 
				<< form.getName() 
				<< " because the is already assigned."
				<< std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& content, Bureaucrat& i) {
	content 
			<< "Name: "
			<< i.getName()
			<< ", Bureaucrat grade "
			<< i.getGrade();
	return (content);
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low.");
}
