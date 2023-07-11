/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:19:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/11 12:41:24 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string _zombieName;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
