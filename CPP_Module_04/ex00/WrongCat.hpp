/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:31:27 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 08:45:27 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include <cstring>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
			WrongCat();
			WrongCat(const WrongCat& copy);
			~WrongCat();
			WrongCat& operator=(const WrongCat& copy);
};

#endif
