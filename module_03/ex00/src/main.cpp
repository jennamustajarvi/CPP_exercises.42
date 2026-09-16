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
	ClapTrap clap("Clap");
	clap.attack("target");
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.beRepaired(1);
	std::cout << "Player 1 has survived" << std::endl;
	std::cout << "\n";

	std::cout << "Create player 2" << std::endl;
	ClapTrap trap("trap");
	for (int i = 0; i < 11; i++)
		trap.attack("target");
	std::cout << "\n";
	
	std::cout << "Create player 3" << std::endl;
	ClapTrap claptrap("claptrap");
	for (int i = 0; i < 11; i++)
	{
		claptrap.attack("target");
		claptrap.beRepaired(1);
	}
	std::cout << "\n";

	return (0);
}
