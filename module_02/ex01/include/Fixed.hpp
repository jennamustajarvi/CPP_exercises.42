/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:05:29 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/14 11:52:47 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
