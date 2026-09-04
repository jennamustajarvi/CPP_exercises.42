/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:46:44 by jemustaj          #+#    #+#             */
/*   Updated: 2026/08/27 14:46:49 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
		

PhoneBook::PhoneBook()
{
	contact_index = 0;
	contact_counter = 0;
}

void	PhoneBook::addContact()
{
	Contact	NewContact;
	std::string	first_name, last_name, nick_name, phone_nbr, darkest_secret;

	std::cout << "First name: ";
	if (!std::getline(std::cin, first_name) || first_name.empty())
	{
		std::cout << "Error: empty fields are not allowed";
		return ;
	}
	std::cout << "Last name: ";
	if (!std::getline(std::cin, last_name) || last_name.empty())
	{
		std::cout << "Error: empty fields are not allowed";
		return ;
	}
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nick_name) || nick_name.empty())
	{
		std::cout << "Error: empty fields are not allowed";
		return ;
	}
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phone_nbr) || phone_nbr.empty())
	{
		std::cout << "Error: empty fields are not allowed";
		return ;
	}
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty())
	{
		std::cout << "Error: empty fields are not allowed";
	return ;
	}

	NewContact.setFirstName(first_name);
	NewContact.setLastName(last_name);
	NewContact.setNickName(nick_name);
	NewContact.setPhoneNumber(phone_nbr);
	NewContact.setDarkestSecret(darkest_secret);

	contacts[contact_index] = NewContact;
	contact_counter += 1;

	std::cout << "New contact added successfully\n";
}

void	PhoneBook::searchContact() const
{

}
