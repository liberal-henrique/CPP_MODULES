/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/28 17:36:14 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat reinaldo("Reinaldo", 1);
    Bureaucrat roberto("Roberto", 150);
	try {
		reinaldo.increment();
	} catch(Bureaucrat::GradeTooLowException& e) {
		std::cerr
				<< "Foi AQUIIII."
				<< e.message()
				<< std::endl;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr 
				<< "Foi AQUIIII." 
				<< e.message()
				<< std::endl;
	}
	reinaldo.decrement();
	std::cout 
			<< "The name is " 
			<< reinaldo.getName()
			<< " his grade is "
			<< reinaldo.getGrade() 
			<< std::endl;
		std::cout 
			<< "The name is " 
			<< roberto.getName()
			<< " his grade is "
			<< roberto.getGrade() 
			<< std::endl;
    
    
    return 0;
}