/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:33:19 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 13:55:00 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Cure : public AMateria {
    public:
            Cure();
            Cure(const Cure& copy);
            ~Cure();
            AMateria& operator=(const AMateria& copy);
            virtual AMateria* clone() const;

    private:
};


#endif