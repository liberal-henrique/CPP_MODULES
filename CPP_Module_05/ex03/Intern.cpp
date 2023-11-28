/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:13 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/28 14:09:34 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout 
		<< "The default constructor was called." 
		<< std::endl;	
}

Intern::Intern(Intern const & copy) {
	std::cout 
		<< "The copy constructor was called." 
		<< std::endl;
	*this = copy;
}

Intern & Intern::operator=(const Intern & copy) {
	(void)copy;
	return (*this);		
}

Intern::~Intern() {
	std::cout 
			<< "The default destructor was called."
			<< std::endl;
}

AForm * makePardon(std::string target) {
	std::cout 
		<< "The intern made a Presidential Pardon Form." 
		<< std::endl;
	return (new PresidentialPardonForm(target));
}

AForm * makeRobotomy(std::string target) {
	std::cout 
			<< "The intern made a Robotomy Request Form." 
			<< std::endl;
	return (new RobotomyRequestForm(target));
}

AForm * makeTree(std::string target) {
	std::cout 
			<< "The intern made a Shrubbery Creation Form." 
			<< std::endl;	
	return (new ShrubberyCreationForm(target));
}

AForm * Intern::makeForm(std::string formName, std::string target) {
	AForm *form = NULL;

	const char * arr[4] = {
		"robotomy request", 
		"presidential pardon",
		"shrubbery creation",
		""
	};

	AForm	*(*function[3])(std::string) = {
		makeRobotomy,
		makePardon,
		makeTree,
	};

	int i = 0;
	while (i < 4 && (formName != arr[i]))
		i++;
	if (i < 3)
		form = function[i](target);
	if (i == 4)
		std::cout << "This form doesn't exist." << std::endl;
	return (form);	
}
