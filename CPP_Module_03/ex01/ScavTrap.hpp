/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/21 18:20:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <ctype.h>
#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
			ScavTrap();
			ScavTrap(std::string& Name);
			ScavTrap(const ScavTrap& copy);
			virtual	~ScavTrap();
			void	guardGate();
			void	attack(const std::string& target);
};

#endif
