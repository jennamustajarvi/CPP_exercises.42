/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennamustajarvi <jennamustajarvi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:20:59 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/18 18:52:42 by jennamustaj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
