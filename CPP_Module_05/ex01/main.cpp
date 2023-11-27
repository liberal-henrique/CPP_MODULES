/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 16:20:14 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
    	Bureaucrat roberto("Roberto", 1);
    	Bureaucrat lucimar("Lucimar", 100);

		Form f1("formF1", false, 10, 150);
		Form f2("formF2", false, 130, 150);
		
		// f1.beSigned(roberto);
		// 
		
		lucimar.signForm(f1);
		roberto.signForm(f1);
		// lucimar.signForm(f2);
		std::cout << "--------------" << std::endl;
		roberto.signForm(f2);


		std::cout << roberto.getGrade() << std::endl;
		std::cout << lucimar.getGrade() << std::endl;
	} 
	catch (std::exception& e) {
		std::cerr 
				<< "Exception caught: " 
				<< e.what() 
				<< std::endl;
		return (1);
	}
    return 0;
}