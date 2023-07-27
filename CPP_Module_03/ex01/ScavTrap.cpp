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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
}

ScavTrap::ScavTrap(std::string& Name): ClapTrap(Name) {
	this->Attack = 20;
	this->Energy = 50;
	this->HitPoints = 100;
	std::cout << "" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap() {

}
