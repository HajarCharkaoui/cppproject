#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string cmnd;
	int i = 0;

	while (1)
	{
		std::cout << "Enter your command: ";
		if (!(std::getline(std::cin, cmnd)))
			std::cout << "Error: The command doesn't be empty!" <<std::endl;
		if (cmnd.compare("ADD") == 0)
		{
			std::string first, last, nick;
			char *phonestr = NULL;
			int phone;

			std::cout << "Enter your information : "<< std::endl;
			std::cout << "First name : ";
			if (!(std::getline(std::cin, first)))
				break;
			std::cout << "Last name : ";
			if (!(std::getline(std::cin, last)))
				break;
			std::cout << "Nickname : ";
			if (!(std::getline(std::cin, nick)))
				break;
			std::cout << "Phone number : ";
			if (!(std::cin >> phonestr))
				break;
			std::cout << std::endl;
			phone = atoi(phonestr);
			phonebook.add_to_list(i++, first, last, nick, phone);
		}
		else if (cmnd.compare("SEARCH") == 0)
		{
			int id;
			std::cout << "Enter the index of a specific contact :";
			if (!(std::cin >> id))
				break;
			phonebook.search(id);
		}
		else if (cmnd.compare("EXIT") == 0)
			break;
	}
}
