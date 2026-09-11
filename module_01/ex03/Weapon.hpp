/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 12:13:14 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/11 20:45:10 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string	type;

	public:
		Weapon(const std::string& type);
		const std::string&	getType() const;
		void				setType(const std::string& type);
		~Weapon();
};

#endif
