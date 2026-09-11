/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:14:49 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/09 14:35:49 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie = newZombie("Heap");
	if (!heap_zombie)
		return (1);
	heap_zombie->announce();
	delete heap_zombie;

	randomChump("Stack");
	return (0);
}
