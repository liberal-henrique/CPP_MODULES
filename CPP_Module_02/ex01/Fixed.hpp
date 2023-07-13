/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/12 15:48:44 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>
#include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float num);
		Fixed(const Fixed &copy);
		~Fixed();
		float	toFloat(void) const;
		int		toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &copy);

	private:
		int	to_store;
		static int fractional;

};
	std::ostream &operator<<(std::ostream &content, const Fixed &copy);

#endif
