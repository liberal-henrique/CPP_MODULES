/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/06 15:22:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

char ScalarConvert::toChar = 0;
long int ScalarConvert::toInt = 0;
float ScalarConvert::toFloat = 0;
double ScalarConvert::toDouble = 0;

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

void input(char c) {
	ScalarConvert::toChar = c;
	ScalarConvert::toInt = static_cast<int>(c);
	ScalarConvert::toFloat = static_cast<float>(c);
	ScalarConvert::toDouble = static_cast<double>(c);
}

void input(float f) {
	if (f < 255)
		ScalarConvert::toChar = static_cast<char>(f);
	ScalarConvert::toInt = static_cast<int>(f);
	ScalarConvert::toFloat = f;
	ScalarConvert::toDouble = static_cast<double>(f);
}

void input(double d) {
	std::cout << "Test: " << std::setprecision(15) << d << std::endl;
	if (d < 255)
		ScalarConvert::toChar = static_cast<char>(d);
	ScalarConvert::toInt = static_cast<int>(d);
	ScalarConvert::toFloat = static_cast<float>(d);
	ScalarConvert::toDouble = d;
}

void input(long int i) {
	if (i < 255)
		ScalarConvert::toChar = static_cast<char>(i);
	ScalarConvert::toInt = i;
	ScalarConvert::toFloat = static_cast<float>(i);
	ScalarConvert::toDouble = static_cast<double>(i);
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

bool	isAlpha(std::string str) {
	for (std::size_t i = 0; i < str.size(); i++) {
		if (!std::isdigit(str[i]) && (str[i] != 'f' && str[i] != '.' && str[i] != '-' && str[i] != '+')) {
			return false;
		}
	}
	return true;
}
void	ScalarConvert::convert(std::string element) {
	if (!element.compare("-inff") 
		|| !element.compare("+inff") 
			|| !element.compare("inff") 
				|| !element.compare("nanf")) {
		displaySpecialFloatCases(element);
		return ;
	}
	if (!element.compare("-inf") 
		|| !element.compare("+inf") 
			|| !element.compare("inf") 
				|| !element.compare("nan")) {
		displaySpecialDoubleCases(element);
		return ;	
	}

	if (!isAlpha(element) 
			|| (element.find_first_of('f') != element.find_last_of('f'))
				|| (element.find_first_of('.') != element.find_last_of('.'))
					|| (element.find_first_of('-') != element.find_last_of('-'))
						|| (element.find_first_of('+') != element.find_last_of('+'))) {
		std::stringstream iss(element);
		iss >> toChar;
		if (iss.peek() == EOF) {
			std::cout << "This is a char." << std::endl;
			input(toChar);
		}
		else {
			std::cout << "Input unavailable." << std::endl;
			return ;
		}
	}
	else if (element.find('f') != std::string::npos) {
		std::cout << "This is a float." << std::endl;
		element.erase(element.size() - 1);
        std::stringstream iss(element);
        iss >> toFloat;
		input(toFloat);
	}
	else if (element.find('.') != std::string::npos) {
		std::cout << "This is a double." << std::endl;
		std::stringstream iss(element);
		iss >> toDouble;
		input(toDouble);
	}
	else {
		std::stringstream iss(element);
		iss >> toInt;
		if (toInt > INT_MAX || toInt < INT_MIN) {
			std::cout << "Impossible." << std::endl;
			return ;
		}
		std::cout << "This is a integer." << std::endl;
		input(toInt);
	}
	display();
}

void display() {

	if (isprint(ScalarConvert::toChar))
		std::cout << "Char: '" << ScalarConvert::toChar << "'" << std::endl;
	else
		std::cout << "Char: Non Displayable." << std::endl;
	std::cout << "Int: " << ScalarConvert::toInt << std::endl;
	std::cout << "Float: " << ScalarConvert::toFloat << (ScalarConvert::toFloat - ScalarConvert::toInt == 0 ? ".0f" : "f") << std::endl;
	std::cout << "Double: " << ScalarConvert::toDouble << (ScalarConvert::toDouble - ScalarConvert::toInt == 0 ? ".0" : "") << std::endl;
}

void manager(std::string element) {
	if (!checker(element)) {
		std::cout << "Invalid input" << std::endl;
		return ;
	}
    ScalarConvert::convert(element);
}
