/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/11 12:45:28 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <cstring>

class Animal {
    public: 
            Animal();
            Animal(const Animal& copy);
            virtual ~Animal();
            Animal& operator=(const Animal& copy);
            virtual void makeSound(void) const;
            std::string getType(void) const;
    protected: 
            std::string type;
};

#endif

