/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:05:35 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/08 20:41:34 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main() {

	std::string level;
	Harl	harl;

	std::cout << "Write your kind of complain: ";
	std::cin >> level;

	if (!check_level(level))
	{
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	else
		harl.complain(level);

	return (0);
}
