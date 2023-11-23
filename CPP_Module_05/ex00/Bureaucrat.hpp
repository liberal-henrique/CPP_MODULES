/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:12:08 by lliberal          #+#    #+#             */
/*   Updated: 2023/10/01 11:31:20 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <stdexcept>
#include <string>

#define default 150

class Bureaucrat {
	public:
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(Bureaucrat const & copy);
			Bureaucrat(const std::string& name,const int &grade);
			Bureaucrat & operator=(const Bureaucrat& copy);
			std::string const & getName(void);
			int const & getGrade(void);
			void setGrade(int newGrade);
			void increment(void);
			void decrement(void);
			void	checkGrade(int grade);
			
			class GradeTooHighException : public std::exception {
				public:
						virtual const char *what() const throw(){
							return " Grade is too high.";
						};
			};
			
			class GradeTooLowException : public std::exception {
				public:
						const char *what() const throw() {
							return " Grade is too low.";
						};
			};

	private:
			std::string const name;
			int grade;
};
std::ostream& operator<<(std::ostream& content, Bureaucrat& i);


#endif