/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:52 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/30 12:49:39 by lliberal         ###   ########.fr       */
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
				const AForm * inform;
				public:
						GradeTooHighException(const AForm *inform) : inform(inform) {}
						virtual const char *what() const throw();
						virtual const AForm *clean() const throw();
			};
			
			class GradeTooLowException : public std::exception {
				const AForm *inform;
				public:
						GradeTooLowException(const AForm *inform) : inform(inform) {}
						virtual const char *what() const throw();
						virtual const AForm *clean() const throw();
			};
			
			class FormIsNotAssigned : public std::exception {
				const AForm *inform;
				public:
						FormIsNotAssigned(const AForm *inform) : inform(inform) {}
						virtual const char *what() const throw();
						virtual const AForm *clean() const throw();
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