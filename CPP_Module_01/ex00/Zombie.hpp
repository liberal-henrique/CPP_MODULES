/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:19:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/03 17:06:05 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>

class Zombie {
	private:
		std::string _ZombieName;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

#endif
