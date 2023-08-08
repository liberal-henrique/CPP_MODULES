/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:49:50 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/08 15:32:42 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::string	invocation;

	while (invocation.empty())
	{
		std::cout << "Give a name to your (stack) zombie: ";
		getline(std::cin, invocation);
	}
	randomChump(invocation);
	invocation.clear();

	std::cout << "----------------------------------------------" << std::endl;

	while (invocation.empty())
	{
		std::cout << "Give a name to your (heap) zombie: ";
		getline(std::cin, invocation);
	}
	Zombie	*New_Zombie = newZombie(invocation);
	delete New_Zombie;
	return (0);
}
