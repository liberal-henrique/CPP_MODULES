/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:40:21 by lliberal          #+#    #+#             */
/*   Updated: 2023/07/11 18:00:34 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <ctype.h>
#include <string>
#include <stdlib.h> 
#include <iostream>
#include <cstring>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
		Contact(std::string first, std::string last, std::string nick, int phone, std::string secret);

		void	SetFirst_Name(std::string new_first_name);
		void	SetLast_Name(std::string new_last_name);
		void	SetNickname(std::string new_nickname);
		void	SetPhone_Number(std::string new_phone_number);
		void	SetDarkest_Secret(std::string new_darkest_secret);

		std::string	GetFirst_Name() const;
		std::string	GetLast_Name() const;
		std::string	GetNickname() const;
		std::string	GetPhone_number() const;
		std::string	GetDarkest_Secret() const;
};

#endif
