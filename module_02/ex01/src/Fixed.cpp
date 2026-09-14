/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:06:34 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 18:50:32 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = intValue << _fractBits;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(floatValue * (1 << _fractBits));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractBits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& src)
{
	out << src.toFloat();
	return (out);
}
