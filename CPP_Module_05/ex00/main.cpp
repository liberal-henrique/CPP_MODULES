/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:45:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/28 14:20:55 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// We must know that the highest grade 
// is 1 and the lowest is 150. 
// So increment is getting closer to 1.
// And decrement is getting closer to 150.
int main()
{
	try {
    	Bureaucrat reinaldo("Reinaldo", 2);
    	Bureaucrat ernandes("Ernandes", 149);
    	Bureaucrat roberto("Roberto", 150);

		reinaldo.increment();
		ernandes.decrement();
		roberto.decrement();
		std::cout << reinaldo << std::endl;
		std::cout << ernandes << std::endl;
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