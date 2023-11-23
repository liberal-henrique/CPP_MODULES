/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:01 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/01 16:01:09 by lliberal         ###   ########.fr       */
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
	checkGrade(this->grade);
	if (form.getAssign() == false && this->grade <= form.getGradeAssingnable()) {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << "." << std::endl;
	}
	else
	{
		std::cerr << this->getName() <<  " couldn’t sign " << form.getName() << " because ";
		if (grade > form.getGradeAssingnable())
		{
			std::cerr << "the officer's grade is not high enough." << std::endl;
			throw GradeTooLowException();
		}
		else
			std::cerr << "the is already assigned." << std::endl;
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