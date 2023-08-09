/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:06:31 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 15:02:02 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <string>
#include <stdlib.h>
#include <iostream>

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	list[8];
		int		counter_contact;

	public:
		PhoneBook();
		~PhoneBook();
		void	Add();
		void	Search();
		void	CleanItem(int position);
		bool	ContactEmpty(int position) const;
		void	Print(int position) const;
		void	PrintList();
		void	TablePrint();
		std::string	EditContent(std::string str);
		void	SetCounterContact();
		void	AddCounterContact();
};

#endif
