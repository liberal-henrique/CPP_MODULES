/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:27 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/02 11:15:21 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public :
			PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm& copy);
			PresidentialPardonForm(std::string Name);
			PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
			~PresidentialPardonForm();

			void execute(Bureaucrat const & executor) const;
	private:
			std::string target;
};

#endif
