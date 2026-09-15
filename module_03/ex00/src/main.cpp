/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:34:55 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/15 10:26:54 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Create default trap" << std::endl;
	ClapTrap def;
	std::cout << "\n";

	std::cout << "Create player 1" << std::endl;
	ClapTrap p1("p1");
	p1.attack("target");
	p1.takeDamage(5);
	p1.takeDamage(5);
	p1.beRepaired(1);
	std::cout << "Player 1 has survived" << std::endl;
	std::cout << "\n";

	std::cout << "Create player 2" << std::endl;
	ClapTrap p2("p2");
	for (int i = 0; i < 11; i++)
		p2.attack("target");
	std::cout << "\n";
	
	std::cout << "Create player 3" << std::endl;
	ClapTrap p3("p3");
	for (int i = 0; i < 11; i++)
	{
		p3.attack("target");
		p3.beRepaired(1);
	}
	std::cout << "\n";

	return (0);
}
