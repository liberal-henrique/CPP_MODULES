/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:50:09 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 15:31:05 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP 
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <cstring>
// #include "ICharacter.hpp"

class ICharacter;

class AMateria {
    public:
        AMateria();
        AMateria(std::string const & type);
        ~AMateria();
        AMateria& operator=(const AMateria& copy);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    protected:
        std::string type;
};

#endif