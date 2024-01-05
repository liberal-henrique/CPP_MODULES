/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:06:23 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/04 15:37:11 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <cstddef>
# include <iomanip>
# include <limits.h>
# include <bits/stdc++.h>
# include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer {
	public:
		static uintptr_t serialize(t_data* ptr);
		static t_data* deserialize(uintptr_t raw);

	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const & copy);
		Serializer &operator=(Serializer const &copy);
};

#endif
