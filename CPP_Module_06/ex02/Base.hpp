/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:39 by lliberal          #+#    #+#             */
/*   Updated: 2023/12/04 14:51:05 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base {
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);
	public:
		virtual ~Base();
};

class A : Base {};

class B : Base {};

class C : Base {};

#endif