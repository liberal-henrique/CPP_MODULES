/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/28 13:58:55 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#include <string>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

enum Forms {
	robotomy,
	presidential,
	shrubbery,
};

struct FunctionAssociation {
	const char * str;
	void (*func)(const char *, const char *);
};

class Intern {
	public:
			Intern();
			Intern(Intern const & copy);
			Intern & operator=(const Intern & copy);
			virtual ~Intern();
			AForm * makeForm(std::string formName, std::string target);

			// PresidentialPardonForm * makePardon(std::string target);
			// RobotomyRequestForm * makeRobotomy(std::string target);
			// ShrubberyCreationForm * makeTree(std::string target);
};
#endif