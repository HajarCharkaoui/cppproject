/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:08:31 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/06 14:49:31 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstname() const
{
	return firstname;
}

std::string Contact::getLastname() const
{
	return lastname;
}

std::string Contact::getNickname() const
{
	return nickname;
}

std::string Contact::getPhonenumber() const
{
	return phonenumber;
}

std::string Contact::getDarckestsecret() const
{
	return darkestsecret;
}

void Contact::setFirstname(std::string fname)
{
	this->firstname = fname;
}
void Contact::setLastname(std::string lname)
{
	this->lastname = lname;
}
void Contact::setNickname(std::string Nname)
{
	this->nickname = Nname;
}

bool isnumeric(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}
void Contact::setPhonenumber(std::string phone)
{
	this->phonenumber = phone;
}
void Contact::setdarkestsecret(std::string ds)
{
	this->darkestsecret = ds;
}
