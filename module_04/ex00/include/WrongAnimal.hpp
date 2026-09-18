/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennamustajarvi <jennamustajarvi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 11:20:56 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/18 18:49:59 by jennamustaj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual ~WrongAnimal(void);

		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string	_type;
};

#endif
