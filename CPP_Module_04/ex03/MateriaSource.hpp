/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:57:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/24 10:43:33 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <string>
#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual void printStock() = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	
    public:
			MateriaSource();
			MateriaSource(const MateriaSource& copy);
			~MateriaSource();
			MateriaSource& operator=(const MateriaSource& copy);
			void learnMateria(AMateria*);
			void printStock();
			void setMateriaType(int idx, std::string _type);
			AMateria* createMateria(std::string const & type);
			
	private:
			AMateria *stock[4];
};

#endif