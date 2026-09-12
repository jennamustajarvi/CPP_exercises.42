/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 12:38:00 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/11 23:14:44 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(const std::string& name);
		void	setWeapon(Weapon& weapon);
		void	attack();
		~HumanB();
};

#endif
