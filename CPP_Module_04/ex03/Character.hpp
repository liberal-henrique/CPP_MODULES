/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:47:18 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/27 19:15:39 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(const Character& copy);
		Character(std::string const & type);
		~Character();
		Character & operator=(const Character &copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		// void use(int idx, ICharacter& target);
		// void print_stock();
	
	private:
			AMateria *stock[4];
			std::string name;
};


#endif