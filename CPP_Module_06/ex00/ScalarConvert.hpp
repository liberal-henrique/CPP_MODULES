/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:51:22 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/06 15:37:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

# include <iostream>
# include <cstdio>
# include <stdlib.h>
# include <stdexcept>
# include <string>
# include <cstddef>        // std::size_t
# include <iomanip>
#include <limits.h>
#include <sstream>
#include <algorithm>


class ScalarConvert {
	public:
		~ScalarConvert();
		static void convert(std::string element);
		static long int	toInt;
		static char		toChar;
		static double	toDouble;
		static float	toFloat;
		
	private:
		ScalarConvert();
		ScalarConvert(ScalarConvert const & copy);
		ScalarConvert &operator=(ScalarConvert const &copy);
};
void manager(std::string element);
void protectInt(std::string element);
void displaySpecialDoubleCases(std::string element);
void displaySpecialFloatCases(std::string element);
// void	identifyType(std::string element);
void	display();
void input(char c);
void input(long int i);
void input(float f);
void input(double d);

#endif
