/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:35:37 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:35:38 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name("ScavTrap");
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap(const std::string& name) : ClapTrap(name)
{}

ScavTrap(const ScavTrap& other) : ClapTrap(other)
{}

ScavTrap& operator=(const ScavTrap& other)
{}

~ScavTrap(void)
{
	std::cout << _name " default destructor called" << std::endl;
}
