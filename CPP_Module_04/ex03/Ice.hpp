/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:08:55 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 21:09:11 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice & operator=(const Ice &assign);
		std::string const & getType() const;
		Ice* clone() const;

	private:
		std::string type;
};

#endif