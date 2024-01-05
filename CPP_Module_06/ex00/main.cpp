/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:56:38 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/05 12:44:46 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConvert.hpp"

// int main(int ac, char **av) {
// 	if (ac != 2) {
// 		std::cerr << "Invalid arguments!" << std::endl;
// 		std::cerr << "Try: ./ScalarConvert <number>" << std::endl;
// 		return (1);
// 	}
	
// 	ScalarConvert::convert(av[1]);
// 	return (0);
// }


// verificar se ja recebemos com ponto

#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string dataInterger = "10";
    std::string dataFloat = "10.0f";
    std::string dataDouble = "10.0";
    
    

    std::istringstream iss(dataString);
    std::istringstream iss2(dataString2);
    

    char charValue;
    char charValue2;
    
    if (iss >> charValue && iss.peek() == EOF) {
        std::cout << "Char value: " << charValue << std::endl;
    } else if (!iss.eof() && iss >> charValue) {
        std::cout << "This is a string: " << charValue << std::endl;
    }

    if (iss2 >> charValue2 && iss2.peek() == EOF) {
        std::cout << "Char value: " << charValue2 << std::endl;
    } else if (!iss2.eof() && iss2 >> charValue2) {
        std::cout << "This is a string: " << charValue2 << std::endl;
    }
    

    return 0;
}

