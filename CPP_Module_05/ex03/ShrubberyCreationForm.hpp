/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:42 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 12:25:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <string>
# include <iostream>
#include <fstream>
# include <exception>

class ShrubberyCreationForm : public AForm {
	public :
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm& copy);
			~ShrubberyCreationForm();
			ShrubberyCreationForm& operator=(ShrubberyCreationForm const & copy);
			
			virtual void	DIY() const;

			std::string 	getTarget() const;
			void			setTarget(std::string target);
	private:
			std::string _target;

};


#endif
