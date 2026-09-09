/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:11:43 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/08 22:15:12 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie();

	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
