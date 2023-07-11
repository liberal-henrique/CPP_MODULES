/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:10:56 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/08 20:38:50 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	this->names[0] = "DEBUG";
	this->names[1] = "ERROR";
	this->names[2] = "INFO";
	this->names[3] = "WARNING";

	functions[0] = &Harl::debug;
	functions[1] = &Harl::error;
	functions[2] = &Harl::info;
	functions[3] = &Harl::warning;
}

Harl::~Harl() {}

void Harl::complain( std::string level) {
	for (int i = 0; i < 4; i++)
	{
		if (names[i] == level){
			(this->*(functions[i]))();
			break ;
		}
	}
}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

bool	check_level (std::string input)
{
	std::string	debug = "DEBUG";
	std::string	info = "INFO";
	std::string	warning = "WARNING";
	std::string	error = "ERROR";

	bool	found = false;

	std::string	*pstring[] = {&debug, &info, &warning, &error};
	int	size = sizeof(pstring) / sizeof(pstring[0]);

	for (int i = 0; i < size; i++) {
		found = (pstring[i]->compare(input) == 0) ? true : found;
	}
	return (found);
}
