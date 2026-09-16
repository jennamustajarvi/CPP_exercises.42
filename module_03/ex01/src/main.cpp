/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:35:34 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:35:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap clapDef;
	ScavTrap scavDef;
	scavDef.attack("Clap");
	scavDef.guardGate();;
	std::cout << "\n";
	
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	std::cout << "\n";

	scav.attack("Clap");
	scav.takeDamage(100);
	scav.takeDamage(10);
	scav.beRepaired(15);
	scav.guardGate();
	std::cout << "\n";

	clap.attack("Scav");
	clap.takeDamage(5);
	clap.takeDamage(4);
	clap.beRepaired(1);
	std::cout << "\n";

	ScavTrap scav_copy(scav);
	scav_copy.takeDamage(20);
	scav_copy.attack("Clap");
	scav_copy.beRepaired(25);
	scav_copy.attack("Clap");
	std::cout << "\n";

	ScavTrap scav_assign("Scav_assign");
	scav_assign = scav;
	scav_assign.takeDamage(20);
	scav_assign.attack("Clap");
	scav_assign.beRepaired(25);
	scav_assign.attack("Clap");
	std::cout << "\n";

	return (0);
}
