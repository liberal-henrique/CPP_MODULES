/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 16:39:01 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

char ScalarConvert::toChar;
int ScalarConvert::toInt;
float ScalarConvert::toFloat;
double ScalarConvert::toDouble;

ScalarConvert::ScalarConvert() {
	std::cout << "The default constructor called." << std::endl;
}

ScalarConvert::ScalarConvert(ScalarConvert const & copy) {
	std::cout << "The copy constructor called." << std::endl;
	*this = copy;
}

ScalarConvert & ScalarConvert::operator=(ScalarConvert const &copy) {
	(void)copy;
	std::cout << "The operator overload called." << std::endl;
	return (*this);
}

ScalarConvert::~ScalarConvert() {
	std::cout << "The destructor called." << std::endl;
}

bool validateRepetitiveInput(std::string element) {
	if (element.find('.') != element.find_last_of('.') 
			|| element.find('f') != element.find_last_of('f') 
				|| element.find('e') != element.find_last_of('e') 
					|| element.find('+') != element.find_last_of('+') 
						|| element.find('-') != element.find_last_of('-'))
		return (false);
	return (true);
}

bool validateFloatInput(std::string element) {
	if ((element.find('f') != std::string::npos && element[element.length() - 1] != 'f')
			|| (element.find('f') != std::string::npos && element[element.find('f') - 1] == '.')
				|| (element.find('f') != std::string::npos && element.find('.') == std::string::npos))
		return (false);
	return (true);
}

bool validateSigns(std::string element) {
	if ((element.find('-') != 0 && element.find('-') != std::string::npos)
			|| (element.find('+') != 0 && element.find('+') != std::string::npos))
		return (false);
	char c = element[element.length() - 1];
	if (c == '.' || c == '+' || c == '-')
		return (false);
	return (true);
}

bool checker(std::string element) {
	if (!validateRepetitiveInput(element) && !validateFloatInput(element) && !validateSigns(element))
		return (false);
	if (element.find_first_not_of("0123456789.ef-+") != std::string::npos && element.size() != 1)
		return (false);
	return (true);
}

void	identifyType(std::string element) {
	if (element.size() == 1 && !isdigit(element[0]))
		std::cout << "This is a char." << std::endl;
	else if (element.find('.') != std::string::npos 
			&& element.find('f') != std::string::npos)
		std::cout << "This is a float." << std::endl;
	else if (element.find('.') != std::string::npos)
		std::cout << "This is a double." << std::endl;
	else
		std::cout << "This is a integer." << std::endl;
}

void ScalarConvert::manager(std::string element) {
	if (!checker(element)) {
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	char a = static_cast<char>(351);
	if (isprint(a))
		std::cout << a << std::endl;
	identifyType(element);
	
}
