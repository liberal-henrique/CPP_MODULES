/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:01:09 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/17 21:55:43 by lliberal         ###   ########.fr       */
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

		static Fixed& function_min(Fixed &element1, Fixed &element2);
		static Fixed& function_min(const Fixed &element1, const Fixed &element2);
		static Fixed& function_max(Fixed &element1, Fixed &element2);
		static Fixed& function_max(const Fixed &element1, const Fixed &element2);

		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);

		Fixed &operator+(const Fixed &fixed);
		Fixed &operator-(const Fixed &fixed);
		Fixed &operator*(const Fixed &fixed);
		Fixed &operator/(const Fixed &fixed);

		Fixed &operator++();// pre-increment
		Fixed operator++(int); // post-decrement
		Fixed &operator--(); //pre-decrement
		Fixed operator--(int);

	private:
		int	to_store;
		static int fractional;

};
	std::ostream &operator<<(std::ostream &content, const Fixed &copy);

#endif
