/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:42 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/02 11:15:16 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERY_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public :
			ShrubberyCreationForm();
			ShrubberyCreationForm(const ShrubberyCreationForm& copy);
			ShrubberyCreationForm(std::string Name);
			ShrubberyCreationForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
			~ShrubberyCreationForm();

			void execute(Bureaucrat const & executor) const;
	private:
			std::string target;

};


#endif
