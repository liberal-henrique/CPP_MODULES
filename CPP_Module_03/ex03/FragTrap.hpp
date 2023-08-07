/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 19:54:32 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap& copy);
			virtual ~FragTrap();
			FragTrap&	operator=(const FragTrap& copy);
			void		highFivesGuys(void);
			void		attack(const std::string& target);
			virtual int			getAttackDamage() const;
};

#endif
