/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:30:47 by jemustaj          #+#    #+#             */
/*   Updated: 2026/08/27 14:47:08 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	command;

		while (1)
	{
		std::cout << "\nADD = add new contact\nSEARCH = search existing contact from PhoneBook\nEXIT = exit the program\n\nwrite your command here: ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			phoneBook.AddContact();
		else if (command == "SEARCH")
			phoneBook.SearchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
