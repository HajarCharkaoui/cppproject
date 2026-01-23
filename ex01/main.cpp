#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string cmnd;

	while (1)
	{
		std::cout << "Enter your command: ";
		if (!(std::getline(std::cin, cmnd)))
			std::cout << "Error: The command doesn't be empty!" <<std::endl;
		if (cmnd.compare("ADD") == 0)
		{
			phonebook.add_to_list();
		}
		else if (cmnd.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		else if (cmnd.compare("EXIT") == 0)
			break;
	}
}
