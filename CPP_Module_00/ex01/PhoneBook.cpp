/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:08:02 by lliberal          #+#    #+#             */
/*   Updated: 2023/08/07 12:06:38 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->counter_contact = 0;
}

void	PhoneBook::CleanItem(int position) {
	if (position >= 0 && position <= 7)
	{
		list[position].SetFirst_Name("");
		list[position].SetLast_Name("");
		list[position].SetNickname("");
		list[position].SetPhone_Number("");
		list[position].SetDarkest_Secret("");
	}
}

bool	PhoneBook::ContactEmpty(int position) const {
	if (list[position].GetFirst_Name().empty() || \
	list[position].GetLast_Name().empty() || \
	list[position].GetNickname().empty() || \
	list[position].GetPhone_number().empty() || \
	list[position].GetDarkest_Secret().empty())
		return (true);
	return (false);
}

PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook was destroyed" << std::endl;
}

void	PhoneBook::SetCounterContact() {
	if (this->counter_contact == 0 && ContactEmpty(counter_contact))
		std::cout << "The list is empty." << std::endl;
	if (!ContactEmpty(7))
	{
		for (int j = 0; j < 7; j++)
			list[j] = list[j + 1];
		Contact list[7];
		list[7].SetFirst_Name("");
		list[7].SetLast_Name("");
		list[7].SetNickname("");
		list[7].SetPhone_Number("");
		list[7].SetDarkest_Secret("");
	}
}

void	PhoneBook::AddCounterContact() {
	if (ContactEmpty(7))
		this->counter_contact++;
	std::cout << "Contact added" << std::endl;
}

void	PhoneBook::PrintList() {
	int	i = 0;

	while (i < 8 && i < this->counter_contact)
		Print(i++);
}

void	PhoneBook::Add() {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	dark_secret;
	int	i = -1;

	SetCounterContact();
	while (first_name.empty())
	{
		std::cout << "Write Your first Name: ";
		getline(std::cin, first_name);
	}
	while (last_name.empty())
	{
		std::cout << "Write Your Last Name: ";
		getline(std::cin, last_name);
	}
	while (nickname.empty())
	{
		std::cout << "Write Your nickname: ";
		getline(std::cin, nickname);
	}
	while (phone.empty())
	{
		std::cout << "Write Your Phone number: ";
		getline(std::cin, phone);
		while (phone[++i])
			if (!isdigit(phone[i]))
			{
				phone.clear();
				i = -1;
				break ;
			}
	}
	while (dark_secret.empty())
	{
		std::cout << "Write Your Darkest Secret: ";
		getline(std::cin, dark_secret);
	}
	list[counter_contact].SetFirst_Name(first_name);
	list[counter_contact].SetLast_Name(last_name);
	list[counter_contact].SetNickname(nickname);
	list[counter_contact].SetPhone_Number(phone);
	list[counter_contact].SetDarkest_Secret(dark_secret);
	AddCounterContact();
	first_name.clear();
	last_name.clear();
	nickname.clear();
	phone.clear();
	dark_secret.clear();
}

void	PhoneBook::Print(int position) const {
	if (position > 8 || position < 1 || ContactEmpty(position))
		std::cout << "This contact don't exist." << std::endl;
	else {
		std::cout << "The first name: ";
		std::cout << list[position].GetFirst_Name() << std::endl;
		std::cout << "The last name:  ";
		std::cout << list[position].GetLast_Name() << std::endl;
		std::cout << "The nickname:  ";
		std::cout << list[position].GetNickname() << std::endl;
		std::cout << "The phone number: ";
		std::cout << list[position].GetPhone_number() << std::endl;
		std::cout << "The Dark secret: ";
		std::cout << list[position].GetDarkest_Secret() << std::endl;
		std::cout << "This is the contact..." << std::endl;
	}

}

void	PhoneBook::TablePrint() {
	int	i = 0;

	while (this->counter_contact != 0 && i < 8 && !ContactEmpty(i))
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		if (list[i].GetFirst_Name().length() >= 10)
			std::cout << std::right << std::setw(10) << list[i].GetFirst_Name().substr(0, 9).append(".");
		else
			std::cout << std::right << std::setw(10) << list[i].GetFirst_Name();
		std::cout << "|";
		if (list[i].GetLast_Name().length() >= 10)
			std::cout << std::right << std::setw(10) << list[i].GetLast_Name().substr(0, 9).append(".");
		else
			std::cout << std::right << std::setw(10) << list[i].GetLast_Name();
		std::cout << "|";
		if (list[i].GetNickname().length() >= 10)
			std::cout << std::right << std::setw(10) << list[i].GetNickname().substr(0, 9).append(".");
		else
			std::cout << std::right << std::setw(10) << list[i].GetNickname();
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::Search() {
	std::string	input;
	int	contact;

	contact = -1;
	TablePrint();
	while (contact == -1)
	{
		std::cout << "Enter the desired contact: | (negatives to NOP)";
		std::cin >> input;
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
				contact = -5;
		}
		if (contact == -1)
			contact = std::atoi(input.c_str());
		if (contact < 0)
			break ;
		if (contact < 8 && contact >= 0)
		{
			Print(contact);
		}
		else
		{
			std::cout << "Try again..." << std::endl;
			break ;
		}
	}
}
