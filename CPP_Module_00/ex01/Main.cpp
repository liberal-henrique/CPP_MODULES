/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:30:50 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/02 16:33:03 by lliberal         ###   ########.fr       */
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
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		for (char &c : command)
			c = std::toupper(c);
		if (command == "ADD")
			catalog.Add();
		if (command == "SEARCH")
		{
			if (!command.empty())
				catalog.Search();
		}
		if (command == "EXIT")
		{
			//	should you destrocters to destroy all
			//my classes.
			exit(0);
		}
	}
}

// Ao adicionar 8 pessoas eu tenho segmentation fault

