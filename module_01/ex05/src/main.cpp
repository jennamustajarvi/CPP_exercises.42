/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 20:09:23 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/13 20:15:01 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	harl;

	std::cout << "\n";
	harl.complain("DEBUG");
	std::cout << "\n";
	harl.complain("INFO");
	std::cout << "\n";
	harl.complain("WARNING");
	std::cout << "\n";
	harl.complain("ERROR");
	std::cout << "\n";
	harl.complain("TESTING");
	std::cout << "\n";
	return (0);
}
