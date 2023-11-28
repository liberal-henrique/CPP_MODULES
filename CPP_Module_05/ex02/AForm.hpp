/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:52 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 15:52:51 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>
# include <string>

class Bureaucrat;

class AForm {
	public:
			AForm();
			AForm(const AForm & copy);
			AForm& operator=(const AForm& copy);
			virtual ~AForm();
			AForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable);
			void beSigned(Bureaucrat& officer);
			
			void	checkGrade(int grade_assingnable, int grade_executable);
			
			std::string const &getName(void);
			bool getAssign() const;
			int const & getGradeAssingnable(void);
			int const & getGradeExecutable(void);
			void execute(const Bureaucrat & executor) const;

			class GradeTooHighException : public std::exception {
				public:
						virtual const char *what() const throw();
			};
			class GradeTooLowException : public std::exception {
				public:
						virtual const char *what() const throw();
			};
			class FormIsNotAssigned : public std::exception {
				public:
						virtual const char *what() const throw();
			};
	protected:
			virtual void	DIY() const = 0;
	private:
			const std::string name;
			bool assign;
			const int grade_assingnable;
			const int grade_executable;
};
std::ostream& operator<<(std::ostream& content, AForm& i);

#endif