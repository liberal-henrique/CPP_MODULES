/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:56:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/06 15:49:21 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You should indicate: file name, string to replace, new string" << std::endl;
		return (1);
	}
	std::ifstream sourceFile(av[1]);
	std::ofstream destFile("filename.replace");
	if (!sourceFile.is_open()) {
		std::cout << "Error opening file." << std::endl;
		return (1);
	}
	std::string	line;
	std::size_t	pos = 0;
	std::string wordToReplace = av[2];
	std::string wordDefinitive = av[3];

	while (std::getline(sourceFile, line))
	{
		for (int i = 0; (pos = line.find(wordToReplace, pos)) != std::string::npos; i++) {
			line.erase(pos, wordToReplace.length());
			line.insert(pos, wordDefinitive);
		}
		pos = 0;
		destFile << line << std::endl;
	}
	sourceFile.close();
	destFile.close();
	return (0);
}
