/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:52 by lliberal          #+#    #+#             */
/*   Updated: 2023/09/28 17:14:10 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "Bureaucrat.hpp"

class Form {
	public:
			Form();
			~Form();
			Form(Form const& copy);
			Form& operator=(const Form& copy);
			void beSigned(const Bureaucrat& officer);
			void signForm(const Bureaucrat& officer);
			class GradeTooLowException : public std::exception {
				public:
						const std::string message() const throw() {
							return " You must have a higher grade to assign this form.";
						}
			};
	private:
			const std::string name;
			const int grade_assingnable;
			const int grade_executable;
			bool assign;
};
std::ostream& operator<<(std::ostream& content, Form& i);

#endif