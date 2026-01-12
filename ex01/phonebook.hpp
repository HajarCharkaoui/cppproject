#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

class Phonebook
{
	private:
		Contact contacts[8];
		int		id;
	public:
		Contact getContacts(int index);
		void	setContacts();
		void 	add_to_list();
		void 	search();
};
#endif