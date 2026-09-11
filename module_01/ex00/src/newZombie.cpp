/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:03:38 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/09 12:34:27 by jemustaj         ###   ########.fr       */
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
		std::cout << "Error: memory allcoation failed" << std::endl;
		return (NULL);
	}
	return (new_zombie);
}
