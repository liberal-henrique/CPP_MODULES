/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:53:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/24 21:10:56 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& copy);
		~Cure();
		Cure & operator=(const Cure &assign);
		std::string const & getType() const;
		Cure* clone() const;


	private:
		std::string type;
};

# endif