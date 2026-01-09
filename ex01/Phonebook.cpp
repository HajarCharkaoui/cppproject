#include "Phonebook.hpp"


void Phonebook::add_to_list(int id, std::string f_name, std::string l_name, std::string nick, std::string phone_nbr)
{
	if (id == 8)
	{
		contacts[7].first_name = f_name;
		contacts[7].last_name = l_name;
		contacts[7].nickname = nick;
		contacts[7].phone_number = phone_nbr;
	}
	else
	{
		contacts[id].first_name = f_name;
		contacts[id].last_name = l_name;
		contacts[id].nickname = nick;
		contacts[id].phone_number = phone_nbr;
	}
}

std::string format_column(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	return str;
}

void Phonebook::search(int id)
{
	if (id < 0 || id > 7)
		std::cout << "Invalide index!" << std::endl;
	else
	{
		std::cout << "|" << std::setw(10) << id;
		std::cout << "|" << std::setw(10) << format_column(contacts[id].first_name);
		std::cout << "|" << std::setw(10) << format_column(contacts[id].last_name);
		std::cout << "|" << std::setw(10) << format_column(contacts[id].nickname) << "|" << std::endl;
	}
}


