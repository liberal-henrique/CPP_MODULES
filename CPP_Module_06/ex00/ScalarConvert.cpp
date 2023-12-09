/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 12:44:56 by lliberal         ###   ########.fr       */
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
	if ((element.find('.') != element.find_last_of('.')) 
			|| (element.find('f') != element.find_last_of('f')) 
				|| (element.find('e') != element.find_last_of('e')) 
					|| (element.find('+') != element.find_last_of('+')) 
						|| (element.find('-') != element.find_last_of('-')))
		return (false);
	return (true);
}

bool validateFloatInput(std::string element) {
	if ((element.find('f') != std::string::npos && element[element.length() - 1] != 'f')
			|| (element.find('f') != std::string::npos && element[element.find('f') - 1] == '.'))
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
	if (!element.compare("-inff") || !element.compare("+inff") || !element.compare("nanf")
		|| !element.compare("-inf") || !element.compare("+inf") || !element.compare("nan")) {
		return (true);
	}
	if (!validateRepetitiveInput(element) 
			|| !validateFloatInput(element) 
				|| !validateSigns(element))
		return (false);
	if (element.find_first_not_of("0123456789.ef-+") != std::string::npos && element.size() != 1)
		return (false);
	return (true);
}

void ScalarConvert::convertInput(char c) {
	toChar = c;
	toInt = static_cast<int>(c);
	toFloat = static_cast<float>(c);
	toDouble = static_cast<double>(c);
}

void ScalarConvert::convertInput(float f) {
	toChar = static_cast<char>(f);
	toInt = static_cast<int>(f);
	toFloat = f;
	toDouble = static_cast<double>(f);
}

void ScalarConvert::convertInput(double d) {
	toChar = static_cast<char>(d);
	toInt = static_cast<int>(d);
	toFloat = static_cast<float>(d);
	toDouble = d;
}

void ScalarConvert::convertInput(int i) {
	toChar = static_cast<char>(i);
	toInt = i;
	toFloat = static_cast<float>(i);
	toDouble = static_cast<double>(i);
}

void displaySpecialFloatCases(std::string element) {
	std::cout << "This is a float." << std::endl;
	std::cout << "Char: Non Displayable" << std::endl;
	std::cout << "Int: Non Displayable" << std::endl;
	ScalarConvert::toFloat = (std::atof(element.c_str()));
	ScalarConvert::toDouble = static_cast<double>(std::atof(element.c_str()));
	std::cout << "Float: " << std::fixed << std::setprecision(7) << ScalarConvert::toFloat << "f" << std::endl;
	std::cout << "Double: " << std::setprecision(15) << ScalarConvert::toDouble << std::endl;
}

void displaySpecialDoubleCases(std::string element) {
	std::cout << "This is a double." << std::endl;

	std::cout << "Char: Non Displayable" << std::endl;
	std::cout << "Int: Non Displayable" << std::endl;
	ScalarConvert::toFloat = static_cast<float>(std::atof(element.c_str()));
	ScalarConvert::toDouble = static_cast<double>(std::atof(element.c_str()));
	std::cout << "Float: " << std::setprecision(7) << ScalarConvert::toFloat << "f" << std::endl;
	std::cout << "Double: " << std::setprecision(15) << ScalarConvert::toDouble << std::endl;
}

// 	else if (element.find('.') != std::string::npos && element.find('f') != std::string::npos)

// void	ScalarConvert::protectInt(std::string element) {
// 	long int test = std::atol(element.c_str());
// 	if (test > INT_MAX || test < INT_MIN)
// 		protect == false;
// }

void	ScalarConvert::identifyType(std::string element) {

	if (!element.compare("-inff") || !element.compare("+inff") || !element.compare("nanf")) {
		displaySpecialFloatCases(element);
		return ;
	}
	if (!element.compare("-inf") || !element.compare("+inf") || !element.compare("nan")) {
		displaySpecialDoubleCases(element);
		return ;	
	}
	if (element.size() == 1 && !isdigit(element[0])) {
		std::cout << "This is a char." << std::endl;
		convertInput(element.at(0));
	}
	else if (element.find('f') != std::string::npos) {
		std::cout << "This is a float." << std::endl;
		convertInput(std::atof(element.c_str()));
	}
	else if ((element.find('.') != std::string::npos)) {
		std::cout << "This is a double." << std::endl;
		convertInput(std::atof(element.c_str()));
	} else {
		std::cout << "This is a integer." << std::endl;
		convertInput(std::atoi(element.c_str()));
	}
	display();
}

void ScalarConvert::display() {

	if (isprint(toChar))
		std::cout << "Char: '" << toChar << "'" << std::endl;
	else
		std::cout << "Char: Non Displayable." << std::endl;
	std::cout << "Int: " << toInt << std::endl;
	std::cout << "Float: " << std::setprecision(7) << toFloat << (toDouble - toInt == 0 ? ".0f" : "f") << std::endl;
	std::cout << "Double: " << std::setprecision(15) << toDouble << (toDouble - toInt == 0 ? ".0" : "") << std::endl;
}

void ScalarConvert::manager(std::string element) {
	if (!checker(element)) {
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	identifyType(element);
}
