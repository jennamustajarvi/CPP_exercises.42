/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 12:31:41 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/11 23:15:07 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA(const std::string& name, Weapon& weapon);
		void	attack();
		~HumanA();
};

#endif
