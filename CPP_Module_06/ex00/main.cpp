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

#include "ScalarConvert.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Invalid arguments!" << std::endl;
		std::cerr << "Try: ./ScalarConvert <number>" << std::endl;
		return (1);
	}
	
	ScalarConvert::convert(av[1]);
	return (0);
}


// verificar se ja recebemos com ponto

// #include <cstdio>
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <iomanip>

// int main() {
//     std::string value = "10.00001";
    

//     int intValue;
//     float floatValue;
//     double doubleValue;

//     if (value.find('f') != std::string::npos) {
//         value.erase(value.size() - 1);
//         std::istringstream iss(value);
//         iss >> floatValue;
//         std::cout << "Float value: " << std::setprecision(7) << floatValue << std::endl;
//     }
//     else if (value.find('.') != std::string::npos) {
//         std::istringstream iss(value);
//         iss >> doubleValue;
//         std::cout << "Double value: " << std::setprecision(15) << doubleValue << std::endl;
//     }
//     else {
//         std::istringstream iss(value);
//         iss >> intValue;
//         std::cout << "Integer value: " << intValue << std::endl;
//     }
//     return 0;
// }

