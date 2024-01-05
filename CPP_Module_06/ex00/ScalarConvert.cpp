/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/05 12:43:16 by lliberal         ###   ########.fr       */
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

void input(char c) {
	ScalarConvert::toChar = c;
	ScalarConvert::toInt = static_cast<int>(c);
	ScalarConvert::toFloat = static_cast<float>(c);
	ScalarConvert::toDouble = static_cast<double>(c);
}

void input(float f) {
	ScalarConvert::toChar = static_cast<char>(f);
	ScalarConvert::toInt = static_cast<int>(f);
	ScalarConvert::toFloat = f;
	ScalarConvert::toDouble = static_cast<double>(f);
}

void input(double d) {
	ScalarConvert::toChar = static_cast<char>(d);
	ScalarConvert::toInt = static_cast<int>(d);
	ScalarConvert::toFloat = static_cast<float>(d);
	ScalarConvert::toDouble = d;
}

void input(int i) {
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

// 	else if (element.find('.') != std::string::npos && element.find('f') != std::string::npos)

// void	ScalarConvert::protectInt(std::string element) {
// 	long int test = std::atol(element.c_str());
// 	if (test > INT_MAX || test < INT_MIN)
// 		protect == false;
// }
//static void convert(std::string element);

bool	isNumber(std::string str) {
	for (std::size_t i = 0; i < str.size(); i++) {
		if (!std::isdigit(str[i])) {
			return false;
		}
	}
	return true;
}
void	ScalarConvert::convert(std::string element) {
	

	if (!element.compare("-inff") || !element.compare("+inff") || !element.compare("inff") || !element.compare("nanf")) {
		displaySpecialFloatCases(element);
		return ;
	}
	if (!element.compare("-inf") || !element.compare("+inf") || !element.compare("inf") || !element.compare("nan")) {
		displaySpecialDoubleCases(element);
		return ;	
	}

	if (!isNumber(element)) {
		std::istringstream iss(element);
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
        std::istringstream iss(element);
        iss >> toFloat;
		input(toFloat);
	}
	else if (element.find('.') != std::string::npos) {
		std::cout << "This is a double." << std::endl;
		std::istringstream iss(element);
		iss >> toDouble;
		input(toDouble);
	}
	else {
		std::cout << "This is a integer." << std::endl;
		std::istringstream iss(element);
		iss >> toInt;
		input(toInt);
	}
	// if (element.size() == 1 && !isdigit(element[0])) {
	// 	std::cout << "This is a char." << std::endl;
	// }
	// else if (element.find('f') != std::string::npos) {
	// 	std::cout << "This is a float." << std::endl;
	// 	input(std::atof(element.c_str()));
	// }
	// else if ((element.find('.') != std::string::npos)) {
	// 	std::cout << "This is a double." << std::endl;
	// 	input(std::atof(element.c_str()));
	// } 
	// else {
	// 	std::cout << "This is a integer." << std::endl;
	// 	input(std::atoi(element.c_str()));
	// }
	display();
}

void display() {

	if (isprint(ScalarConvert::toChar))
		std::cout << "Char: '" << ScalarConvert::toChar << "'" << std::endl;
	else
		std::cout << "Char: Non Displayable." << std::endl;
	std::cout << "Int: " << ScalarConvert::toInt << std::endl;
	std::cout << "Float: " << std::setprecision(7) << ScalarConvert::toFloat << (ScalarConvert::toDouble - ScalarConvert::toInt == 0 ? ".0f" : "f") << std::endl;
	std::cout << "Double: " << std::setprecision(15) << ScalarConvert::toDouble << (ScalarConvert::toDouble - ScalarConvert::toInt == 0 ? ".0" : "") << std::endl;
}

void manager(std::string element) {
	if (!checker(element)) {
		std::cout << "Invalid input" << std::endl;
		return ;
	}
    ScalarConvert::convert(element);
}
