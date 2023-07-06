/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:52:20 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 15:10:24 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
#define HUMANA_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(Weapon &object);
		HumanA(const std::string &name, Weapon &object);
		~HumanA();
		void		attack();
		void		setName(std::string name);
		std::string	getName();

	private:
		std::string	_name;
		Weapon *_weapon;
};

#endif
