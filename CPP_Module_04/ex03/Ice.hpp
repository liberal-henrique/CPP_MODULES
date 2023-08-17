/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:30:59 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/17 13:55:48 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Ice : public AMateria {
    public:
            Ice();
            Ice(const Ice& copy);
            ~Ice();
            Ice& operator=(const Ice& copy);
            virtual AMateria* clone() const;
    private:
};


#endif