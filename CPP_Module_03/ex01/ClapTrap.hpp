/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:32:02 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/21 18:07:43 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <ctype.h>
#include <iostream>
#include <cstring>

class ClapTrap {
	public:
			ClapTrap();
			ClapTrap(std::string& Name);
			~ClapTrap();
			virtual void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRapaired(unsigned int amount);
			std::string	getName(void);
			void		setName(std::string NewName);
			int			getHitPoints(void);
			void		setHitPoints(unsigned int amount);
			int			getEnergy(void);
			void		setEnergy(unsigned int amount);
			int			getDamageAttack() const;
			void		setDamageAttack(int Attack);

	protected:
			std::string	Name;
			int			HitPoints;
			int			Energy;
			int			Attack;
};

#endif
