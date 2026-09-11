/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 18:12:38 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/11 20:45:08 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
		

Weapon::Weapon(const std::string& type) : type(type)
{
}

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(const std::string& type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}
