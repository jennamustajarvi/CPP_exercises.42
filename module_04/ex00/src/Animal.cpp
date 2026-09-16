/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:21:03 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/16 11:21:03 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal")
{
	std::cout << _type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << _type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << _type << " copy assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << _type << " destructor called" << std::endl;
}
