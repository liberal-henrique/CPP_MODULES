/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:23:18 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 18:28:26 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>
#include <cstring>

class AMateria {
	
	public:
		AMateria();
		AMateria(const AMateria& copy);
		~AMateria();
		AMateria& operator=(const AMateria& copy);
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
	
	protected:
		std::string	type;
};

#endif