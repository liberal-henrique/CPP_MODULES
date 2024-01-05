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

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <exception>

template <typename T>
class Array {
    public: 
		Array<T>() : _len(0) {
			_arr = new T[_len];
		};
		Array<T>(unsigned int n) : _len(n) {
			_arr = new T[_len];
		};
		Array<T>(Array const &other) : _len(other._len) {
			_arr = new T[_len];
			for (size_t i = 0; i < _len; i++)
				_arr[i] = other._arr[i];
		};
		Array & operator=(Array const &other) {
			if (this != &other) {
				delete[] _arr;
				_arr = new T[_len];
				for (size_t i = 0; i < _len; i++)
					_arr[i] = other[i];
			}
			return (*this);
		};
		Array<T> & operator[](int size) {
			if (size < 0 || size >= static_cast<int>(_len))
				throw outOfLimits();
			return (_arr[size]);
		};
		~Array() {
			delete[] _arr;
		};
		unsigned int size() const {
			return (_len);
		};
		class outOfLimits : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Limit yourself, Bro");
				};
		};
	private:
		T		*_arr;
		size_t	_len;
};

#endif
