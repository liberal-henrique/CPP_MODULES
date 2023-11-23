/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/02 11:15:27 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

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

