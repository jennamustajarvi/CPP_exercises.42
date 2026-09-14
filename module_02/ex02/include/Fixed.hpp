/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:05:48 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 21:57:49 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		/*	RAII */
		Fixed(void);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& rhs);
		~Fixed(void);

		/*	Get and Set raw bits	*/
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		/*	Transform raw bits Back to INT and FLOAT	*/
		int		toInt(void) const;
		float	toFloat(void) const;

		/*	Comparison operations	*/
		bool operator>(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;

		/*	Arithmetic operations	*/
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		/*	Pre-increment and Post-increment	*/
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		/*	Comparing objects	*/
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};

/*	Output stream for fixed point type	*/
std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
