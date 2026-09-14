/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:06:21 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 22:15:28 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractBits = 8;

/*	RAII */
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


/*	Get and Set raw bits	*/
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}


/*	Transform raw bits Back to INT and FLOAT	*/
int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> _fractBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << _fractBits));
}


/*	Comparison operations	*/
bool	Fixed::operator>(const Fixed& rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed& rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}


/*	Arithmetic operations	*/
Fixed	Fixed::operator+(const Fixed& rhs) const
{
	Fixed	res;
	
	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	Fixed	res;
	
	res.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	Fixed	res;
	
	res.setRawBits((this->getRawBits() * rhs.getRawBits()) >> _fractBits);
	return (res);
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed	res;
	
	res.setRawBits((this->getRawBits() << _fractBits) / rhs.getRawBits());
	return (res);
}


/*	Pre-increment and Post-increment	*/
Fixed&	Fixed::operator++(void)
{
	this->_fixedPointValue += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_fixedPointValue += 1;
	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	this->_fixedPointValue -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_fixedPointValue -= 1;
	return (temp);
}


/*	Comparing objects	*/
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}


/*	Output stream for fixed point type	*/
std::ostream& operator<<(std::ostream& out, const Fixed& src)
{
	out << src.toFloat();
	return (out);
}
