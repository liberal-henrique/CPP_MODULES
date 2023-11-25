/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:57:11 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 15:02:44 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std:: cout << "The MateriaSource constructor was called." << std::endl;
		for (int i = 0; i < 4; i++) {
			stock[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	std:: cout << "The MateriaSource copy constructor was called." << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource() {	
	std:: cout << "The MateriaSource destructor was called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (stock[i])
			delete(stock[i]);
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	std:: cout << "The MateriaSource's operator overload was called." << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			delete(stock[i]);
			stock[i] = copy.stock[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *content) {
	std:: cout	<< "The MateriaSource learned a "
				<< content->getType()
				<< " new content."
				<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!this->stock[i]) {
			this->stock[i] = content;
			break ;	
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
	for (int i = 0; i < 4; i++) {
		if (stock[i] && stock[i]->getType() == type) {
			std::cout
					<< "Creating Materia is working"
					<< std::endl;
			return (stock[i]->clone());
		}
	}

	return (0);
}

void	MateriaSource::printStock() {
	for (int i = 0; i < 4; i++) {
		if (!this->stock[i])
			break ;
		if (this->stock[i])
			std::cout
					<< "Materia: " 
					<< stock[i]->getType() 
					<< std::endl;
	}
}

void MateriaSource::setMateriaType(int idx, std::string _type) {
	if (stock[idx])
		stock[idx]->setType(_type);
}

