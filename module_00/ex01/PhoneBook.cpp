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

	Contact	NewContact;
	NewContact.setFirstName(first_name);
	NewContact.setLastName(last_name);
	NewContact.setNickName(nick_name);
	NewContact.setPhoneNumber(phone_nbr);
	NewContact.setDarkestSecret(darkest_secret);

	contacts[contact_index] = NewContact;
	contact_index = (contact_index + 1) % 8;
	if (contact_counter < 8)
		contact_counter += 1;

	std::cout << "New contact added successfully\n";
}

static std::string	truncateInput(std::string const &input);

void	PhoneBook::searchContact() const
{
	if (contact_counter == 0)
	{
		std::cout << "\n >>> Phonebook has 0 contacts, start with ADD new contact <<< \n";
		return ;
	}

	std::cout << std::setw(10) << "\nindex" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "\n";

	for (int i = 0; i < contact_counter; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncateInput(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncateInput(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncateInput(contacts[i].getNickName()) << "|" << "\n\n";
	}

	std::string	input;
	std::cout << "Enter index: ";
	if (!getline(std::cin, input) || input.empty())
	{
		std::cout << "\nError: no index sent\n";
		return ;
	}

	static int	three_tries;
	int index = 0;
	std::istringstream	iss(input);
	if (!(iss >> index) || index < 0 || index >= contact_counter)
	{
		std::cout << "\nError: sent invalid index\n --> try again or return to main menu by pressing enter\n";
		three_tries++;
		if (three_tries == 3)
		{
			three_tries = 0;
			std::cout << "\nError: tried max times, return to main menu\n";
			return ;
		}
		searchContact();
		return ;
	}

	std::cout << "\n";
	std::cout << "	First name: " << contacts[index].getFirstName() << "\n";
	std::cout << "	Last name: " << contacts[index].getLastName() << "\n";
	std::cout << "	Nickname: " << contacts[index].getNickName() << "\n";
	std::cout << "	Phone number: " << contacts[index].getPhoneNumber() << "\n";
	std::cout << "	Darkest secret: " << contacts[index].getDarkestSecret() << "\n\n";
}

static std::string	truncateInput(const std::string& input)
{
	if (input.length() > 10)
		return (input.substr(0, 9) + ".");
	return (input);
}
