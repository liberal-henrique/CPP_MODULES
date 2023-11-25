/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:23:18 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/24 10:45:50 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria {
	
	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria& copy);
		virtual ~AMateria();
		AMateria& operator=(const AMateria& copy);
		
		int	equipped;
		std::string const & getType() const;
		void	setType(std::string _type);
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
	
	protected:
		std::string	type;
};

#include "ICharacter.hpp"

#endif