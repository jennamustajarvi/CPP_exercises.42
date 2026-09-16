/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:36:05 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:36:06 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap clapDef;
	FragTrap fragDef;
	fragDef.attack("Clap");
	fragDef.highFivesGuys();
	std::cout << "\n";
	
	ClapTrap clap("Clap");
	FragTrap frag("Frag");
	std::cout << "\n";

	frag.attack("Clap");
	frag.takeDamage(100);
	frag.takeDamage(10);
	frag.beRepaired(15);
	frag.highFivesGuys();
	std::cout << "\n";

	clap.attack("Frag");
	clap.takeDamage(5);
	clap.takeDamage(4);
	clap.beRepaired(1);
	std::cout << "\n";

	FragTrap frag_copy(frag);
	frag_copy.takeDamage(20);
	frag_copy.attack("Clap");
	frag_copy.beRepaired(25);
	frag_copy.attack("Clap");
	std::cout << "\n";

	FragTrap frag_assign("Frag_assign");
	frag_assign = frag;
	frag_assign.takeDamage(20);
	frag_assign.attack("Clap");
	frag_assign.beRepaired(25);
	frag_assign.attack("Clap");
	std::cout << "\n";
	return (0);
}
