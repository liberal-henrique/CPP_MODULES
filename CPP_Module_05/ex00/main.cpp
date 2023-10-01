/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/01 11:31:01 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
    	Bureaucrat reinaldo("Reinaldo", 2);
    	Bureaucrat roberto("Roberto", 150);

		reinaldo.increment();
		roberto.decrement();
		std::cout << reinaldo << std::endl;
		std::cout << roberto << std::endl;
	} 
	catch (std::exception& e) {
		std::cerr 
				<< "Exception caught: " 
				<< e.what() 
				<< std::endl;
	}


    return 0;
}