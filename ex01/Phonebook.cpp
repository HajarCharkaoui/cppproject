#include "Phonebook.hpp"

Contact Phonebook::getContacts(int index)
{
	return contacts[index];
}
void Phonebook::add_to_list()
{

}

std::string format_column(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	return str;
}

// void Phonebook::search(int id)
// {
	
// }
