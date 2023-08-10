/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:56:49 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/27 18:33:57 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"


int main(void) {
	ScavTrap *A = new ScavTrap("Mario");
	ScavTrap C("Liberal");

	ClapTrap D("Dog");
	std::cout << D.getName() << " is here." << std::endl;
	D.attack(A->getName());
	C.guardGate();

	A->attack(C.getName());
	C.takeDamage(A->getDamageAttack());

	C.attack(A->getName());
	A->takeDamage(C.getDamageAttack());
	delete A;
}
