/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:42 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 11:33:51 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <string>
# include <iostream>
# include <exception>

class ShrubberyCreationForm : public AForm {
	public :
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			~ShrubberyCreationForm();
			ShrubberyCreationForm(const ShrubberyCreationForm& copy);
			ShrubberyCreationForm& operator=(ShrubberyCreationForm const & copy);

			void 			execute(Bureaucrat const & executor) const;
			std::string 	getTarget() const;
			void			setTarget(std::string target);
	private:
			std::string _target;

};


#endif
