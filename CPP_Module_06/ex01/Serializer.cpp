/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:06:27 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 14:34:35 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "The default constructor called." << std::endl;
}

Serializer::Serializer(Serializer const & copy) {
	std::cout << "The copy constructor called." << std::endl;
	*this = copy;
}

Serializer::~Serializer() {
	std::cout << "The destructor called." << std::endl;
}

Serializer &Serializer::operator=(Serializer const &copy) {
	(void)copy;
	std::cout << "The operator overload called." << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(t_data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<t_data *>(raw));
}
