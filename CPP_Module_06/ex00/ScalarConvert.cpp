/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 15:43:41 by lliberal         ###   ########.fr       */
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

void	identifyTypes(std::string element) {
	if (element.size() == 1 && !isdigit(element[0]))
		std::cout << "This is a char." << std::endl;
	// else if () {}
}

int aNumber(std::string element) {
	if (element.find('.') != element.find_last_of('.'))
		return (0);
	if (element.find('f') != element.find_last_of('f'))
		return (0);
	if (element.find('e') != element.find_last_of('e'))
		return (0);
	if (element.find('+') != element.find_last_of('+'))
		return (0);
	if (element.find('-') != element.find_last_of('-'))
		return (0);
	if (element[element.length() - 1] == '.' 
		|| element[element.length() - 1] == '+' 
			|| element[element.length() - 1] == '-'
	)
		return (0);
	if (!element.find_first_not_of("0123456789.ef", (element[0] == '+' || element[0] == '-')))
		return 0;
}


void ScalarConvert::Convert(std::string element) {
	aNumber(element);
	identifyTypes(element);
}
