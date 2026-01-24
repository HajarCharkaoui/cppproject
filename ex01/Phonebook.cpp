/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:09:16 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/24 17:09:17 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

std::string prompt(std::string question)
{
	std::string answer;

	while(true)
	{
		std::cout << question;
		if (!(std::getline(std::cin, answer)))
			break;
		if (answer.empty())
			std::cout << "it shouldn't be empty !" << std::endl;
		else if (question.compare("Phone number: ") == 0)
		{
			if (!isnumeric(answer))
				std::cout << "Invalide Phone Number!" << std::endl;
			else
				return answer;
		}
		else
			return answer;
	}
	return "";
}

void Phonebook::add_to_list()
{
	Contact newcontact;
	std::string input;

	input = prompt("First name: ");
	if (std::cin.eof()) return;
	newcontact.setFirstname(input);
	input = prompt("Last name: ");
	if (std::cin.eof()) return;
	newcontact.setLastname(input);
	input = prompt("Nick name: ");
	if (std::cin.eof()) return;
	newcontact.setNickname(input);
	input = prompt("Phone number: ");
	if (std::cin.eof()) return;
	newcontact.setPhonenumber(input);
	input = prompt("Darkestsecret: ");
	if (std::cin.eof()) return;
	newcontact.setdarkestsecret(input);
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
		std::cout << "|" << std::setw(10) << i ;
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getFirstname());
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getLastname());
		std::cout << "|" << std::setw(10) << format_column(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << " ___________________________________________ " << std::endl;
}
void Phonebook::search()
{
	display_contacts();
	std::string input = prompt("Search for a specific contact: ");
	int index = std::atoi(input.c_str());

	if (index >= 0 && index < id && index < 8)
	{
		std::cout << "First Name: " << contacts[index].getFirstname() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastname() << std::endl;
		std::cout << "Nick name: " << contacts[index].getNickname() << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "Invalid index!"  << std::endl;
}
