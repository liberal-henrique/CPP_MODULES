/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 11:26:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "AForm.hpp"

int main()
{
	try {
    	Bureaucrat roberto("Roberto", 1);
    	Bureaucrat lucimar("Lucimar", 100);

		ShrubberyCreationForm tree("lucimar");

		tree.beSigned(roberto);

		std::cout << roberto.getGrade() << std::endl;
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