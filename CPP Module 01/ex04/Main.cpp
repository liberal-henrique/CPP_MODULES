/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:56:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/06 19:25:43 by lliberal         ###   ########.fr       */
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
	std::string file = av[1];
	std::ifstream sourceFile(file, std::ifstream::in);
	if (!sourceFile) {
		sourceFile.close();
		std::cout << "Error opening file." << std::endl;
		return (1);
	}
	std::ofstream destFile(file.append(".replace"), std::ofstream::trunc);
	if (!destFile)
	{
		destFile.close();
		std::cout << "Error opening or creating the new file." << std::endl;
		return (1);
	}
	std::string	line;
	std::size_t	pos = 0;
	std::string toReplace = av[2];
	std::string toInsert = av[3];

	while (std::getline(sourceFile, line))
	{
		for (int i = 0; (pos = line.find(toReplace, pos)) != std::string::npos; i++) {
			line.erase(pos, toReplace.length());
			line.insert(pos, toInsert);
			pos += toInsert.length();
		}
		pos = 0;
		destFile << line << std::endl;
	}
	sourceFile.close();
	destFile.close();
	return (0);
}
