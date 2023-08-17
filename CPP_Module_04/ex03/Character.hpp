/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:21:32 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 15:28:09 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "ICharacter.hpp"
// #include "AMateria.hpp"

class AMateria;

class Character : public ICharacter {
    public:
        Character();
        Character(const Character& copy);
        ~Character();
        Character& operator=(const Character& copy);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        AMateria* slots[4];
        std::string name;
};

#endif