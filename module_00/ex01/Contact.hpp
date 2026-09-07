/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jennamustajarvi <jennamustajarvi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:47:38 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/03 13:12:06 by jennamustaj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{	
	public:
		void		setFirstName(const std::string& firstName);
		void		setLastName(const std::string& lastName);
		void		setNickName(const std::string& nickName);
		void		setPhoneNumber(const std::string& phoneNumber);
		void		setDarkestSecret(const std::string& darkestSecret);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
