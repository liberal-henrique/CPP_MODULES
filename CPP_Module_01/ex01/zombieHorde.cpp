/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:43:33 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/08 17:02:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	Zombie	*myHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << ": ";
		myHorde[i].setName(name);
		myHorde[i].announce();
	}
	return (myHorde);
}
