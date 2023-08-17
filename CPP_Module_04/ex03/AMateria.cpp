/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:56:16 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 14:12:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout 
            << "AMateria was created." 
            << std::endl;
}

AMateria::AMateria(std::string const & type) {
    std::cout 
            << "AMateria was created with a specific " 
            << type 
            << "." 
            << std::endl;
    this->type = type;
}

AMateria::~AMateria() {
    std::cout << "AMateria was destroyed." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy) {
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

std::string const & AMateria::getType() const {
    return (this->type);
}