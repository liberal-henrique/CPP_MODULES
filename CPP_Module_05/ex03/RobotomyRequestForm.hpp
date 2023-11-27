/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:37 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 13:41:35 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>
# include <exception>
#include <cstdlib> 
#include <ctime>
#include <iomanip>

class RobotomyRequestForm : public AForm {
	public :
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm& copy);
			RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
			~RobotomyRequestForm();

			virtual void DIY() const;
			
			std::string const	getTarget() const;
			void			setTarget(std::string target);
			
	private:
			std::string _target;
};

#endif

