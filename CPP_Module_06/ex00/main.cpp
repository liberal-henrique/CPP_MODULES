/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:56:38 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/29 09:35:31 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Invalid arguments!" << std::endl;
		std::cerr << "Try: ./ScalarConvert <number>" << std::endl;
		return (1);
	}
	
	ScalarConvert test;
	test.Convert(av[1]); 
	return (0);
}