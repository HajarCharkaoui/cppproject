/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:09:21 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/26 16:38:48 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

bool isnumeric(std::string str);
std::string prompt(std::string question);

class Phonebook
{
	private:
		Contact contacts[8];
		int		id;
	public:
		Phonebook();
		Contact getContacts(int index) const;
		int		getid() const;
		void 	add_to_list();
		void 	search();
		void	display_contacts();
		~Phonebook();
};
#endif