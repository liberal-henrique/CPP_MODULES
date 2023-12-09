/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:36:55 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 14:42:35 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main(void) {
//     t_data test;
//     t_data *ptrData = &test;


//     ptrData->c = 'd';
//     ptrData->n = 42;

//     uintptr_t keeper = Serializer::serialize(ptrData);
// 	std::cout << keeper << std::endl;
//     t_data *keeperPtr = Serializer::deserialize(keeper);
//     std::cout << keeperPtr->c << std::endl;
//     std::cout << keeperPtr->n << std::endl;

// }


// int	main(void)
// {
// 	t_data		*original = new t_data;
	
// 	original->n = 65;
// 	original->c = 'r';
// 	std::cout << "Original Data *:\t\t" << original << std::endl;
// 	std::cout << "Original values:\t\t" << original->n << "\t" << original->c << std::endl;

// 	uintptr_t	serialized;
// 	t_data		*finalRes;
	
// 	serialized = Serializer::serialize(original);
// 	std::cout << "\nUintptr after serializer:\t" << serialized << std::endl;
	
// 	finalRes = Serializer::deserialize(serialized);
// 	std::cout << "\nData * after deserializer:\t" << finalRes << std::endl;
// 	std::cout << "Values after deserializer:\t" << finalRes->n << "\t" << finalRes->c << std::endl;
	
// 	delete original;
// }
