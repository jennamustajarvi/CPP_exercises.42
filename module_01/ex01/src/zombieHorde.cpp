/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:09:37 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/13 19:33:34 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Error: invalid amount of zombies, give more than 0" << "\n";
		return (NULL);
	}
	Zombie *zombie = new(std::nothrow) Zombie[N];
	if (!zombie)
	{
		std::cerr << "Error: memory allocation failed" << "\n";
		return (NULL);
	}
	std::cout << "\n";
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
		zombie[i].announce();
	}
	std::cout << "\n";
	return (zombie);
}
