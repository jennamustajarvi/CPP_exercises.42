/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 22:51:48 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/13 23:48:10 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed & src);
		Fixed & operator=(const Fixed & rhs);
		~Fixed(void);

		void	getRawBits(void) const;
		int		setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static const int	_fractBits;
};

#endif
