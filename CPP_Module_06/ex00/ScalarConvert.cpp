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

void	identifyType(std::string element) {
	std::cout << element << std::endl;
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

bool validateInput(std::string element) {
	if (element.find('.') != element.find_last_of('.'))
	{
		std::cout << 0 << std::endl;

		return (false);
	}
	if (element.find('f') != element.find_last_of('f')) {
		std::cout << 1 << std::endl;
		
		return (false);
	}
	if (element.find('e') != element.find_last_of('e')) {
		std::cout << 2 << std::endl;
		
		return (false);
	}
	if (element.find('+') != element.find_last_of('+'))
	{
		std::cout << 3 << std::endl;

		return (false);
	}
	if (element.find('-') != element.find_last_of('-')) {
		std::cout << 4 << std::endl;
		
		return (false);
	}
	if (element.find('-') != 0 && element.find('-') != std::string::npos) {
		std::cout << 5 << std::endl;
		return (false);
	}
	if (element.find('+') != 0 && element.find('+') != std::string::npos)
	{
		std::cout << 6 << std::endl;

		return (false);
	}
	if (element[element.find('.') + 1] == 'f') {
		std::cout << 7 << std::endl;
		
		return (false);
	}
	if (element.find('f') && !element.find('.')) {
		std::cout << 8 << std::endl;

		return (false);
	}
	char c = element[element.length() - 1];
	if (c == '.' || c == '+' || c == '-') {
		std::cout << 9 << std::endl;
		
		return (false);
	}
	if (element.find_first_not_of("0123456789.ef-+") != std::string::npos && element.size() != 1) {
		std::cout << 10 << std::endl;
		return (false);
	}
	return (true);
}


void ScalarConvert::Convert(std::string element) {
	if (!validateInput(element)) {
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	identifyType(element);
}
