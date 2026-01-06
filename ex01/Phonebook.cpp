#include "phonebook.hpp"


void Phonebook::add_to_list(int i, std::string f_name, std::string l_name, std::string nick, std::string phone_nbr)
{
	contacts[id].first_name = f_name;
	contacts[id].last_name = l_name;
	contacts[id].nickname = nick;
	contacts[id].phone_number = phone_nbr;
}

void Phonebook::search(int id)
{
	if (id < 0 || id > 7)
		std::cout << ""
}


