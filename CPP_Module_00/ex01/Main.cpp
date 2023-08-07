/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:30:50 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 11:37:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	PhoneBook catalog;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: " << std::endl;
		std::getline(std::cin, command);
		for (int i = 0; i < (int)command.length(); i++)
			command[i] = std::toupper(command[i]);
		if (command == "ADD")
			catalog.Add();
		if (command == "SEARCH")
		{
			if (!command.empty())
				catalog.Search();
		}
		if (command == "EXIT")
			exit(0);
		command = "";
	}
}
