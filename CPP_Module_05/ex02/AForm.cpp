/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:55:42 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/02 11:45:15 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : 
			name(""), 
			assign(false), 
			grade_assingnable(150), 
			grade_executable(150) 
{
	std::cout 
			<< "The default constructor was called." 
			<< std::endl;	
}

AForm::AForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable) :
	name(name), assign(assign), grade_assingnable(grade_assingnable), grade_executable(grade_executable) {
		std::cout << "The AForm was created with all the content." << std::endl;
}

AForm::~AForm() {
	std::cout 
			<< "The default destructor was called."
			<< std::endl;
}

void AForm::beSigned(Bureaucrat& officer) {
	if (officer.getGrade() > this->grade_assingnable)
		throw GradeTooLowException();
	else
	{
		this->assign = true;
		std::cout << this->name << " was assigned." << std::endl;
	}
}

bool AForm::getAssign()
{
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

void AForm::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& content, AForm& i) {
	content << "Name: " << i.getName() << ", Bureaucrat grade " << i.getGradeAssingnable();
	return (content);
}
