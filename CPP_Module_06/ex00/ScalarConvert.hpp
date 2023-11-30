/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:51:22 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 15:05:39 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <cstddef>        // std::size_t

class ScalarConvert {
	public:
		ScalarConvert();
		ScalarConvert(ScalarConvert const & copy);
		ScalarConvert &operator=(ScalarConvert const &copy);
		~ScalarConvert();
		static void Convert(std::string element);
		static char		toChar;
		static int		toInt;
		static float	toFloat;
		static double	toDouble;
};

#endif