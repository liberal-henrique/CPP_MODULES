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

void Span::addNumber(int first, int last) {
	int difference = last - first;
	if (last <= first 
		|| _myArr.size() == N 
			|| (_myArr.size() + difference) >= N)
		throw impossibleAddNumber();
	for (int i = first; i <= last; i++)
		_myArr.push_back(i);
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
	std::vector<int>::iterator it = tmp.begin();
	int smaller = *it - *(it - 1);
	for (it = tmp.begin(); it != (tmp.end()); ++it) {
		if (it != tmp.begin())
			smaller = std::min((*it - *(it - 1)), smaller);
	}
	return (smaller);
}

int Span::longestSpan() {
	if (_myArr.size() < 2)
		throw notEnoughElement();
	std::vector<int> tmp = _myArr;
	std::sort(tmp.begin(), tmp.end());
	int biggest = tmp.back() - tmp.front();
	return (biggest);
}

const char * Span::impossibleAddNumber::what() const throw() {
	return ("The limit of numbers has been reached.");
}

const char * Span::notEnoughElement::what() const throw() {
	return ("There isn't elements enough.");
}

int Span::operator[](unsigned int i) const {
	if (_myArr.size() <= i) 
		throw notEnoughElement();
	return (_myArr[i]);
}

// static void printVector(std::vector<int> &myVector) {
// 	std::vector<int>::iterator it;
// 	for (it = myVector.begin(); it != myVector.end(); ++it)
// 		std::cout << *it << ", ";
// }
