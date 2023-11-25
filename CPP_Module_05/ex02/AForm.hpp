/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:09:52 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/25 11:27:25 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
			AForm();
			AForm(AForm const& copy);
			AForm& operator=(const AForm& copy);
			virtual ~AForm();
			AForm(const std::string &name, bool assign, int grade_assingnable, int grade_executable);
			void beSigned(Bureaucrat& officer);
			
			void	checkGrade(int grade);
			
			std::string const &getName(void);
			bool getAssign();
			int const & getGradeAssingnable(void);
			int const & getGradeExecutable(void);
			virtual void execute(Bureaucrat const & executor) const = 0;

			class GradeTooHighException : public std::exception {
				public:
						virtual const char *what() const throw() {
							return " Grade is too high.";
						}
			};
			class GradeTooLowException : public std::exception {
				public:
						virtual const char *what() const throw() {
							return " Grade is too low.";
						}
			};
	private:
			const std::string name;
			bool assign;
			const int grade_assingnable;
			const int grade_executable;
};
std::ostream& operator<<(std::ostream& content, AForm& i);

#endif