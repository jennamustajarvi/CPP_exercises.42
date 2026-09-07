/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennamustajarvi <jennamustajarvi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:47:19 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/03 13:12:54 by jennamustaj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		void	addContact();
		void	searchContact() const;

	private:
		int		contact_index;
		int		contact_counter;
		Contact	contacts[8];
};

#endif
