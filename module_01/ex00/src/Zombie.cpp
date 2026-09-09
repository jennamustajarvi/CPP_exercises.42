/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:10:08 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/09 13:14:13 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " has born" << "\n";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << " has died" << "\n";
}
