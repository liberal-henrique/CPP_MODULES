/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:51:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 12:43:41 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <cstddef>        // std::size_t
# include <iomanip>
#include <limits.h>
# include <bits/stdc++.h> 

class ScalarConvert {
	public:
		ScalarConvert();
		ScalarConvert(ScalarConvert const & copy);
		ScalarConvert &operator=(ScalarConvert const &copy);
		~ScalarConvert();
		static void manager(std::string element);
		void	protectInt(std::string element);
		static void	identifyType(std::string element);
		static void	display();
		static void convertInput(char c);
		static void convertInput(int i);
		static void convertInput(float f);
		static void convertInput(double d);

		static char		toChar;
		static int		toInt;
		static float	toFloat;
		static double	toDouble;

		bool protect;
};

#endif
