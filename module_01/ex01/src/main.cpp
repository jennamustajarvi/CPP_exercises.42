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

#include "../include/Zombie.hpp"

int	main(void)
{
	int			N = 20;

	Zombie	*horde = zombieHorde(N, "4B");
	if (!horde)
		return (1);
	delete[] horde;
	std::cout << "\n";
	return (0);
}
