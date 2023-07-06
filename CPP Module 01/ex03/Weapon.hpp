/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:51:59 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/05 14:40:59 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string &kind);
		~Weapon();
		const std::string	&getType(void);
		void		setType(std::string name);

	private:
		std::string _type;
};


#endif
