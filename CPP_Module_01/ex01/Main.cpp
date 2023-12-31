/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/08 15:51:50 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av) {

	if (ac < 2)
		return (1);
	std::string input = av[1];
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (1);
	}
	int	N = atoi(av[1]);
	Zombie	*newHorde = zombieHorde(N, "Carlos");

	delete[] newHorde;
}
