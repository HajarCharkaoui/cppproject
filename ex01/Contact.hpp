/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:08:44 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/24 17:08:45 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <string>

bool isnumeric(std::string str);

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string	phonenumber;
		std::string darkestsecret;
	public:
		std::string getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getPhonenumber();
		std::string getDarckestsecret();
	
		void setFirstname(std::string fname);
		void setLastname(std::string lname);
		void setNickname(std::string Nname);
		void setPhonenumber(std::string phone);
		void setdarkestsecret(std::string ds);
};
#endif