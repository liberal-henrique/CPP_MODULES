/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 19:59:26 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
			DiamondTrap();
			DiamondTrap(const std::string& name);
			DiamondTrap(const DiamondTrap& copy);
			~DiamondTrap();
			DiamondTrap& operator=(const DiamondTrap& copy);
			void whoAmI();
			std::string	getName(void);
			// void	attack(const std::string& target);

	private:
			std::string name;
			using FragTrap::HitPoints;
			using FragTrap::Attack;
			using ScavTrap::Energy;

};

#endif
