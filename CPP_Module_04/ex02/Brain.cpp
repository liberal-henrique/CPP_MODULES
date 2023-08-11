/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:43:09 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 11:34:07 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout
            << "Brain constructor was called."
            << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout
            << "Brain copy constructor was called."
            << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout
            << "Brain destructor was called."
            << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}
