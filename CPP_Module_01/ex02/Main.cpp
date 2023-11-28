/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:26:48 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/23 13:04:12 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av) {

    (void) ac;
    (void) av;
    std::string     variable = "HI THIS IS BRAIN";
    std::string     *stringPTR = &variable;
    std::string     &stringREF = variable;

	std::cout
			<< "Here: "
			<< *stringPTR
			<< ""
			<< variable
			<< std::endl;

    std::cout 
			<< "The memory address of the string is: " 
			<< &variable 
			<< std::endl;
    std::cout 
			<< "The memory address held by stringPTR is: " 
			<< &stringPTR 
			<< std::endl;
    std::cout 
			<< "The memory address held by stringREF is: " 
			<< &stringREF 
			<< std::endl;
    std::cout 
			<< std::endl;
    std::cout 
			<< "The value of the string variable is: " 
			<< variable 
			<< std::endl;
    std::cout 
			<< "The value pointed to by stringPTR is: " 
			<< *stringPTR 
			<< std::endl;
    std::cout 
			<< "The value pointed to by stringREF is: " 
			<< stringREF 
			<< std::endl;

    return (0);
}
