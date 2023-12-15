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

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type::iterator const_iterator;
			
			MutantStack();
			MutantStack(MutantStack const &other) {
				*this = other;
			};
			~MutantStack() {};
			MutantStack & operator=(MutantStack const &other) {
				if (this != &other)
					std::stack<T>::operator=(other);
				return (*this);
			};

			iterator begin() {
				return this->c.begin();
			}
			iterator end() {
				return this->c.end();
			}
			const_iterator cbegin() {
				return this->c.begin();
			}
			const_iterator cend() {
				return this->c.end();
			}
};



// template <typename T>
// std::ostream& operator<<(std::ostream& content, const typename MutantStack<T>::iterator& i ) {
// 	content << *i;
// 	return (content);
// }



#endif
