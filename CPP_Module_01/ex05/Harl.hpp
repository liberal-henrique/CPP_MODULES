/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:10:59 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/08 20:38:10 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <ctype.h>
#include <string>
#include <iostream>
#include <cstring>

class Harl {
	public:
		Harl();
		~Harl();
		void complain( std::string level);
	private:
		typedef void (Harl::*pnt_func)();
		std::string	names[4];
		pnt_func functions[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
	bool	check_level (std::string input);

#endif
