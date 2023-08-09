/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:01:03 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/09 19:21:34 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << "my own tests" << std::endl;
	Fixed const c(5.015f);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: "  << b << std::endl;
	std::cout << "c: "  << c << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;


	return 0;
}
