/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennamustajarvi <jennamustajarvi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:30:47 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/03 13:08:01 by jennamustaj      ###   ########.fr       */
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
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "\n >>> Unknown command, write ADD SEARCH or EXIT <<< \n";
	}
	return (0);
}
//NOTE: todo next is to make sure error and guidance messages are consistent format and clear. also check if I could input colors
