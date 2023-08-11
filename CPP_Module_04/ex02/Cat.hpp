/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:25:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 13:10:39 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
			Cat();
			Cat(const Cat& copy);
			virtual ~Cat();
			Cat& operator=(const Cat& copy);
			void    makeSound() const;
			void getIdeas();
			void setIdea(std::string);
	private:
			Brain *brain;

};

#endif

