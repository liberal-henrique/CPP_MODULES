/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:01 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/28 15:03:25 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {
	std::cout << "The constructor was called." << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
	std::cout << "The copy constructor was called." << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(const std::string& name,const int &grade) : name(name) {
	std::cout << "The constructor was called." << std::endl;
	this->grade = grade;
	catchErrors(this->grade);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "The destructor was called." << std::endl;	
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& copy) {
	if (this == &copy)
		return (*this);
	
	this->grade = copy.grade;
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

void Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::catchErrors(int grade) {
	try {
		this->checkGrade(grade);
	} catch(Bureaucrat::GradeTooLowException& e) {
		std::cerr
				<< "We too this error."
				<< e.message()
				<< std::endl;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr 
				<< "We took this error." 
				<< e.message()
				<< std::endl;
	}
}

void Bureaucrat::increment(void) {
	std::cout 
			<< "Let's increment the grade."
			<< std::endl;
	catchErrors(--this->grade);
	setGrade(grade);
}

void Bureaucrat::decrement() {
	std::cout 
			<< "Let's decrement the grade."
			<< std::endl;
	catchErrors(++this->grade);
	setGrade(grade);
}

std::ostream& operator<<(std::ostream& content, Bureaucrat& i) {
	content << "Name: " << i.getName() << ", Bureaucrat grade " << i.getGrade();
	return (content);
}
