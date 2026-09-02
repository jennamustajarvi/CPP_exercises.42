/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:47:38 by jemustaj          #+#    #+#             */
/*   Updated: 2026/08/27 18:33:31 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		void	SetFirstName(const std::string& firstName);
		void	SetLastName(const std::string& lastName);
		void	SetNickName(const std::string& nickName);
		void	SetPhoneNumber(const std::string& phoneNumber);
		void	SetDarkestSecret(const std::string& darkestSecter);
		std::string	GetFirstName() const;
		std::string	GetLastName() const;
		std::string	GetNickName() const;
		std::string	GetPhoneNumber() const;
		std::string	GetDarkestSecret() const;
};

#endif
