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

#include "Span.hpp"

Span::Span(int element) : N(element) {
	std::vector<int> myVector(0, 0);
}

Span::~Span() {
}

void Span::addNumber(int number) {
	if (_myArr.size() == N)
		throw impossibleAddNumber();
	else
		_myArr.push_back(number);
}

void Span::printVector(void) {
	std::vector<int>::iterator it;
	for (it = _myArr.begin(); it != _myArr.end(); ++it)
		std::cout << *it << ", ";
}

int Span::shortestSpan() {
	if (_myArr.size() < 2)
		throw notEnoughElement();
	std::vector<int> tmp = _myArr;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	int smaller;

	for (it = tmp.begin(); it != (tmp.end()); ++it) {
		if (it != tmp.begin())
			smaller = std::min((*it - (*it - 1)), smaller);
	}
	return (smaller);
}

std::vector<int>::iterator Span::longestSpan() {
	std::sort(_myArr.begin(), _myArr.end());

}

const char * Span::impossibleAddNumber::what() const throw() {
	return ("The limit of numbers has been reached.");
}

const char * Span::notEnoughElement::what() const throw() {
	return ("There isn't elements enough.");
}
