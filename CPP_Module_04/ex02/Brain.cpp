/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:43:09 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:14:33 by lliberal         ###   ########.fr       */
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

std::string Brain::getIdeas(int position) {
	return (ideas[position]);
}

void	Brain::showIdeas() {
	int control = 0;

	while (control < 100 && getIdeas(control) != "")
	{
		std::cout << ideas[control] << "." << std::endl;
		control++;
	}
}

void Brain::setIdeas(std::string idea) {
	if (idea == "")
		return ;
	int control = 0;

	while (control < 100)
	{
		if (getIdeas(control) == "") {
				std::cout << "idea included." << std::endl;
				ideas[control] = idea;
				return ;
		}
		control++;
	}
	if (control == 99)
		std::cout << "too much ideas." << std::endl;
}
