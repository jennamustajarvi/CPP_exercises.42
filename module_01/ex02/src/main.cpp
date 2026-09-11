/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:31:16 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/11 12:00:59 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR =	&string;
	std::string	&stringREF = string;

	std::cout << "\n";
	std::cout << "address of string = " << &string << "\n";
	std::cout << "address held in stringPRT = " << stringPTR << "\n";
	std::cout << "address held in stringREF = " << &stringREF << "\n";
	std::cout << "\n";
	std::cout << "value of string = " << string << "\n";
	std::cout << "value which stringPTR points = " << *stringPTR << "\n";
	std::cout << "value which stringREF references = " << stringREF << "\n";
	std::cout << "\n";
	return (0);
}
