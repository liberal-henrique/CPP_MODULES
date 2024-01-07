/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/06 17:35:14 by lliberal         ###   ########.fr       */
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
		Array<T>() : _len(1) {
			_arr = new T[_len];
		};
		Array<T>(unsigned int n) : _len(n) {
			_arr = new T[_len];
		};
		Array<T>(Array const &other) : _len(other._len) {
			_arr = new T[_len];
			for (int i = 0; i < _len; i++)
				_arr[i] = other._arr[i];
		};
		Array<T>& operator=(Array<T> const &other) {
			if (this != &other) {
				delete[] _arr;
				this->_len = other._len;
				_arr = new T[_len];
				for (int i = 0; i < _len; i++)
					_arr[i] = other[i];
			}
			return (*this);
		};
		T& operator[](int size) const {
			if (size < 0 || size >= _len)
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
		int		_len;
};

#endif
