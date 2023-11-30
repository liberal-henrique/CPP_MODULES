/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 12:51:25 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern slave;
		AForm * form = NULL;
		Bureaucrat boss("Joao", 1);
		
		try {
			form = slave.makeForm(" request", "default");
			form->beSigned(boss);
			form->execute(boss);
		}
		catch(AForm::GradeTooHighException &e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			// delete e.clean();
		}
		catch(AForm::GradeTooLowException &e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			// delete e.clean();
		}
		catch(AForm::FormIsNotAssigned &e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			// delete e.clean();
		}
		catch(Intern::FormNotCreated &e) {
			std::cerr 
					<< "Exception caught: " 
					<< e.what() 
					<< std::endl;
			// delete e.clean();
		}
		if (form)
			delete form;
	}
	// std::cout << "-------------------" << std::endl; 
	// {
	// 	Intern slave;
	// 	AForm * form = NULL;
	// 	Bureaucrat boss("Joao", 1);
	// 	try {
	// 		form = slave.makeForm("pardon", "default");
	// 		// form->beSigned(boss);
	// 		form->execute(boss);
	// 	}
	// 	catch(AForm::GradeTooHighException &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
	// 	catch(AForm::GradeTooLowException &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
	// 	catch(AForm::FormIsNotAssigned &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
		// catch(Intern::FormNotCreated &e) {
		// 	std::cerr 
		// 			<< "Exception caught: " 
		// 			<< e.what() 
		// 			<< std::endl;
		// 	// delete e.clean();
		// }
	// 	if (form)
	// 		delete form;
	// }
	// std::cout << "-------------------" << std::endl; 
	// {
	// 	Intern slave;
	// 	AForm * form = NULL;
	// 	Bureaucrat boss("Joao", 1);
	// 	try {				
	// 		form = slave.makeForm(" creation", boss.getName());
	// 		form->beSigned(boss);
	// 		form->execute(boss);
	// 	}
	// 	catch(AForm::GradeTooHighException &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
	// 	catch(AForm::GradeTooLowException &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
	// 	catch(AForm::FormIsNotAssigned &e) {
	// 		std::cerr 
	// 				<< "Exception caught: " 
	// 				<< e.what() 
	// 				<< std::endl;
	// 		// delete e.clean();
	// 	}
	// 	if (form)
	// 		delete form;
	// }
    return 0;
}