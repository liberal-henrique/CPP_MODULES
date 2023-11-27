/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/11/27 09:49:49 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>
# include <exception>

#define default 150

class AForm;

class Bureaucrat {
	public:
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(Bureaucrat const & copy);
			Bureaucrat(const std::string& name,const int &grade);
			Bureaucrat & operator=(const Bureaucrat& copy);
			std::string const & getName(void);
			int const & getGrade(void) const;
			void setGrade(int newGrade);
			void increment(void);
			void decrement(void);
			void checkGrade(int grade);

			void	signForm(AForm &form);
			
			void executeForm(AForm const & form);

			class GradeTooHighException : public std::exception {
				public:
						virtual const char *what() const throw();
			};
			
			class GradeTooLowException : public std::exception {
				public:
						virtual const char *what() const throw();
			};
			
			class FormWasNotCreated : public std::exception {
				public:
						virtual const char *what() const throw();
			};
	private:
			std::string const name;
			int grade;
};
std::ostream& operator<<(std::ostream& content, Bureaucrat& i);


#endif