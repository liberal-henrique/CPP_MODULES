/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:32:02 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/27 18:20:40 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	public:
			ClapTrap();
			ClapTrap(std::string Name);
			ClapTrap(const ClapTrap &copy);
			void	attack(const std::string& target);
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
			ClapTrap&	operator=(const ClapTrap &copy);
			~ClapTrap();

	protected:
			std::string		Name;
			unsigned int	HitPoints;
			unsigned int	Energy;
			unsigned int	Attack;
};

#endif
