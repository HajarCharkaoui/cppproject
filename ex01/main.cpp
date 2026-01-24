/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:08:55 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/24 17:08:56 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook phonebook;
	std::string cmnd;

	while (1)
	{
		cmnd = prompt("Enter your command: ");
		if (std::cin.eof())
			break;
		else if (cmnd.compare("ADD") == 0)
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
