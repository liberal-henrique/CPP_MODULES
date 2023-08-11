/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:30:14 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
			Dog();
			Dog(const Dog& copy);
			virtual ~Dog();
			Dog& operator=(const Dog&copy);
			void    makeSound() const;
			void getIdeas();
			virtual void setIdea(std::string);
	private:
			Brain *brain;
};

#endif

