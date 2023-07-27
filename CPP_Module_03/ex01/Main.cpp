/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/21 18:20:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap *A = new ClapTrap("Mario");
	ClapTrap *B = new ClapTrap("Luigi");

	std::cout << A->getName() << std::endl;
	std::cout << B->getName() << std::endl;

	A->attack(B->getName());
	B->takeDamage(A->getDamageAttack());
	A->attack(B->getName());
	B->takeDamage(A->getDamageAttack());
	A->attack(B->getName());
	B->takeDamage(A->getDamageAttack());
	A->attack(B->getName());
	B->takeDamage(A->getDamageAttack());
	B->attack(A->getName());
	B->beRapaired(2);
	A->beRapaired(2);
	A->getEnergy();
	B->getEnergy();
	delete(A);
	delete(B);
}
