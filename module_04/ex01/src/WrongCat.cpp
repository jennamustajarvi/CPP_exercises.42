/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:21:17 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/16 11:21:18 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	_brain = new Brain();
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		*_brain = *other._brain;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	delete _brain;
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Ma au (wrong cat)" << std::endl;
}

Brain*	WrongCat::getBrain(void) const
{
	return (_brain);
}
