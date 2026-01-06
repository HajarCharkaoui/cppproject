#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
};

class Phonebook
{
	public:
		Contact contacts[8];
		void add_to_list(int i, std::string f_name, std::string l_name, std::string nick, std::string phone_nbr);
		void search(int id);
};
#endif