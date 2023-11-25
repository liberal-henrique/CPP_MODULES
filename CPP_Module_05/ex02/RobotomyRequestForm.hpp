/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/24 15:14:31 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>
# include <exception>

class RobotomyRequestForm : public AForm {
	public :
			RobotomyRequestForm();
			RobotomyRequestForm(const RobotomyRequestForm& copy);
			RobotomyRequestForm(std::string Name);
			RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
			~RobotomyRequestForm();
			void execute(Bureaucrat const & executor) const;
	private:
			std::string target;
};

#endif

