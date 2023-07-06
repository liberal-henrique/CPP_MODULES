/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:52:12 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 15:06:26 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
#define HUMANB_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(const std::string &name);
		HumanB(const std::string &name, Weapon &object);
		~HumanB();
		void		attack();
		void		setName(std::string name);
		std::string	getName();
		void		setWeapon(Weapon &object);


	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
