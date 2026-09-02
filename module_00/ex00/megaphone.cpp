/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:51:58 by jemustaj          #+#    #+#             */
/*   Updated: 2026/06/10 14:52:22 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 1)
	{
		i = 1;
		while (i < ac)
		{
			std::string input = av[i];
			std::transform(input.begin(), input.end(), input.begin(), ::toupper);
			std::cout << input;
			i++;
			if (i == ac)
				std::cout << "\n";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
