/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:34:13 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 09:38:49 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include <cstring>

class WrongAnimal {
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal& copy);
			virtual ~WrongAnimal();
			WrongAnimal& operator=(const WrongAnimal& copy);
			void makeSound(void) const;
			std::string getType(void) const;
	protected:
			std::string type;
};

#endif
