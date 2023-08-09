/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/09 16:22:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int	to_store;
		static const int fractional;
};

#endif
