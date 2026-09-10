/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:58:45 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/10 17:33:43 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	Zombie		*zombie = NULL;
	std::string	name = "kuka";
	int			N = 0;

	if (N == 0)
	{
		std::cout << "This is a horde, give maaaaany zombies" << std::endl;
		return (1);
	}
	zombie = zombieHorde(N, name);
	delete[] zombie;
	return (0);
}
