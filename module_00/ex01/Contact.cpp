/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:47:27 by jemustaj          #+#    #+#             */
/*   Updated: 2026/08/27 14:47:28 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void	Contact::setFirstName(const std::string& firstName)
{
	this->first_name = firstName;
}

void		Contact::setLastName(const std::string& lastName)
{
	this->last_name = lastName;
}

void		Contact::setNickName(const std::string& nickName)
{
	this->nick_name = nickName;
}

void		Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phone_number = phoneNumber;
}

void		Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->darkest_secret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return (this->first_name);
}

std::string	Contact::getLastName() const
{
	return (this->last_name);
}

std::string	Contact::getNickName() const
{
	return (this->nick_name);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkest_secret);
}
