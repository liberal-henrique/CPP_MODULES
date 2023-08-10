/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:31:58 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/31 20:05:04 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(int ac, char **av) {
	(void)ac;
	(void)av;
	DiamondTrap A = DiamondTrap("Arnaldo");
	DiamondTrap B = DiamondTrap("Galvao");
	ClapTrap *C = new ClapTrap("Ferdinando");
	ScavTrap *D = new ScavTrap("Osvaldo");

	// std::cout 
	// 		<< "my name is "
	// 		<< A.getName() 
	// 		<< std::endl 
	// 		<< "my name is "
	// 		<< C->getName() 
	// 		<< std::endl;
	std::cout << "----------------" << std::endl;
	A.whoAmI();
	std::cout << "----------------" << std::endl;

	delete C;
	delete D;
	// A.attack(B.getName());
	// B.takeDamage(A.getDamageAttack());
	// A.getEnergy();
}
