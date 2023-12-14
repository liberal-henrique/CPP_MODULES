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

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <exception>

class Span {
	private:
			unsigned int N;
			std::vector<int> _myArr;
			Span();

	public:
			Span(int element);
			Span(Span const &other);
			Span &operator=(Span const &other);
			~Span();
			void addNumber(int number);
			void printVector(void);
			int shortestSpan();
			std::vector<int>::iterator longestSpan();
			class impossibleAddNumber : public std::exception {
				public:
						virtual const char *what() const throw();
			};
			class notEnoughElement : public std::exception {
				public:
						virtual const char *what() const throw();
			};
};

#endif
