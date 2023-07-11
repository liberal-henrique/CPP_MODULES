/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:43:33 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/04 13:52:23 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// LEarn about containers library and vectors

Zombie* zombieHorde(int N, std::string name) {

	Zombie	*myHorde = new (std::nothrow) Zombie[N];
	if (!myHorde)\
		return (NULL);

	for (int i = 1; i <= N; i++)
	{
		std::cout << i << ": ";
		myHorde->setName(name);
		myHorde->announce();
	}
	return (myHorde);
}
