#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

bool isnumeric(std::string str);

class Phonebook
{
	private:
		Contact contacts[8];
		int		id;
	public:
		Phonebook();
		Contact getContacts(int index);
		int		getid();
		void 	add_to_list();
		void 	search();
		void	display_contacts();
};
#endif