#include "Phonebook.hpp"

Contact Phonebook::getContacts(int index)
{
	return contacts[index];
}

int	Phonebook::getid()
{
	return id;
}

Phonebook::Phonebook()
{
	this->id = 0;
}

std::string prompt(std::string question) {
    std::cout << question;
    std::string answer;
    std::getline(std::cin, answer);
	if (answer.empty())
		std::cout << "it shouldn't be empty !";
	return answer;
}

void Phonebook::add_to_list()
{
	Contact newcontact;

		newcontact.setFirstname(prompt("First name: "));
		newcontact.setLastname(prompt("Last name: "));
		newcontact.setNickname(prompt("Nick name: "));
		newcontact.setPhonenumber(prompt("Phone number: "));
		newcontact.setdarkestsecret(prompt("Darkestsecret: "));
		std::cout << std::endl;
		contacts[id % 8] = newcontact;
		id ++;
}

std::string format_column(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	return str;
}

void	Phonebook::display_contacts()
{
	int count = id;

	if (count > 8)
		count = 8;
	std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|" << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getFirstname()) << "|";
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getLastname()) << "|";
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << " ___________________________________________ " << std::endl;
}
void Phonebook::search()
{
	display_contacts();
	std::string index = prompt("Search for a specific contact: ");

	if (!isnumeric(index))
	{
		std::cout << "Invalid index!"  << std::endl;
		return ;
	}
	


}
