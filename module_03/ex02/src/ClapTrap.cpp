/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 22:35:57 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:35:58 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void)
	: _name("Def"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), _hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << _name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << _name << " copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_hitPoints)
	{
		std::cout << _name << " cannot attack, no hitpoints left" << std::endl;
		return ;
	}
	else if (!_energyPoints)
	{
		std::cout << _name << " cannot attack, no energypoints left" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << _name << " attacks " << target << ", causing "
		<< _attackDamage << " points of damage" << std::endl;
	std::cout << _name << " has " << _energyPoints << " energypoints left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << _name << " has 0 hitpoints" << std::endl;
		return ;
	}
	else if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _name << " takes " << amount << " points of damage" << std::endl;
	std::cout << _name << " has " << _hitPoints << " hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << _name << " cannot be repaired, no hitpoints left" << std::endl;
		return ;
	}
	else if (!_energyPoints)
	{
		std::cout << _name << " cannot be repaired, no energypoints left" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << _name << " repaired with " << amount << " points" << std::endl;
	std::cout << _name << " has " << _hitPoints << " hitpoints left" << std::endl;
	std::cout << _name << " has " << _energyPoints << " energypoints left" << std::endl;
}
