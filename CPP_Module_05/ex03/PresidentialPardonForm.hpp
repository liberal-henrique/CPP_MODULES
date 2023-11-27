/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:27 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 14:16:40 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>
# include <exception>

class PresidentialPardonForm : public AForm {
	public :
			PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm& copy);
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
			~PresidentialPardonForm();

			virtual void DIY() const;

			std::string const	getTarget() const;
			void setTarget(std::string target);

	private:
			std::string _target;
};

#endif
