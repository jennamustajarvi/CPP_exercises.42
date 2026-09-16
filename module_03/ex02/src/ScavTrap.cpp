/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:36:03 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:36:04 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << _name << " ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << _name << " ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " ScavTrap default destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_hitPoints)
	{
		std::cout << _name << " ScavTrap cannot attack, no hitpoints left" << std::endl;
		return ;
	}
	else if (!_energyPoints)
	{
		std::cout << _name << " ScavTrap cannot attack, no energypoints left" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << _name << " ScavTrap attacks " << target << ", causing "
		<< _attackDamage << " points of damage" << std::endl;
	std::cout << _name << " has " << _energyPoints << " energypoints left" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << _name << " is now in Gatekeeper mode" << std::endl;
}
