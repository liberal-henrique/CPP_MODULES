/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 12:52:20 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>
#include <cstring>

class AAnimal {
    public:
            AAnimal();
            AAnimal(const AAnimal& copy);
            virtual ~AAnimal();
            AAnimal& operator=(const AAnimal& copy);
            virtual void makeSound(void) const = 0;
            std::string getType(void) const;
    protected:
            std::string type;
};

#endif

