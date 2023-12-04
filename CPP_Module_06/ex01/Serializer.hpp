/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:06:23 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 14:36:47 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <cstddef>        // std::size_t
# include <iomanip>
#include <limits.h>
# include <bits/stdc++.h>
# include "Data.hpp"

class Serializer {
		Serializer();
		Serializer(Serializer const & copy);
		~Serializer();
		Serializer &operator=(Serializer const &copy);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif