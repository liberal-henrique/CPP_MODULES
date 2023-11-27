/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 14:41:53 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{	
		try {
			Bureaucrat roberto("Roberto", 137);
			Bureaucrat lucimar("Lucimar", 100);

			ShrubberyCreationForm tree(roberto.getName());

			tree.beSigned(roberto);
			tree.execute(roberto);

			std::cout << roberto.getGrade() << std::endl;
		} 
		catch (std::exception& e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			return (1);
		}
	}

	{
		try {
			Bureaucrat roberto("roberto", 1);
			
			RobotomyRequestForm form(roberto.getName());
			form.beSigned(roberto);
			form.execute(roberto);
			
			std::cout << roberto.getGrade() << std::endl;
		}
		catch (std::exception& e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			return (1);
		}
	}

	{
		try {
			Bureaucrat roberto("roberto", 1);
			PresidentialPardonForm form (roberto.getName());

			form.beSigned(roberto);	
			form.execute(roberto);
			std::cout << roberto.getGrade() << std::endl;
		}
		catch (std::exception& e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			return (1);
		}
	}
		
    return 0;
}