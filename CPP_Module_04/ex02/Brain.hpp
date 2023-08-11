/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:36:44 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/11 11:34:42 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <cstring>

class Brain {
	public:
			Brain();
			Brain(const Brain& copy);
			~Brain();
			Brain& operator=(const Brain& copy);
	private:
			std::string	ideas[100];
};

#endif
