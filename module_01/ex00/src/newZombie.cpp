/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:03:38 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/12 23:21:47 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*new_zombie = new(std::nothrow) Zombie(name);
	if (!new_zombie)
	{
		std::cerr << "Error: memory allcoation failed" << "\n";
		return (NULL);
	}
	return (new_zombie);
}
