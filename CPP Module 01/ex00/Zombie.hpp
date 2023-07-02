/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:19:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/02 22:40:27 by lliberal         ###   ########.fr       */
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
		std::string name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void randomChump( std::string name );
		void	SetName(std::string name);
};

#endif
