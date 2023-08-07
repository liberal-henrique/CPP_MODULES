/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:41:17 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 11:34:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(std::string first, std::string last, std::string nick, int phone, std::string secret)
:first_name(first)
 {
	last_name = last;
	nickname = nick;
	phone_number = phone;
	darkest_secret = secret;
}

Contact::~Contact() {
	std::cout << "The Contact's destructor was called." << std::endl;
}

std::string	Contact::GetFirst_Name() const {
	return (first_name);
}

std::string	Contact::GetLast_Name() const {
	return (last_name);
}

std::string	Contact::GetNickname() const {
	return (nickname);
}

std::string	Contact::GetPhone_number() const {
	return (phone_number);
}

std::string	Contact::GetDarkest_Secret() const {
	return (darkest_secret);
}

void	Contact::SetFirst_Name(std::string new_first_name) {
	this->first_name = new_first_name;
}

void	Contact::SetLast_Name(std::string new_last_name) {
	this->last_name = new_last_name;
}

void	Contact::SetNickname(std::string new_nickname) {
	this->nickname = new_nickname;
}

void	Contact::SetPhone_Number(std::string new_phone_number) {
	this->phone_number = new_phone_number;
}

void	Contact::SetDarkest_Secret(std::string new_darkest_secret) {
	this->darkest_secret = new_darkest_secret;
}

