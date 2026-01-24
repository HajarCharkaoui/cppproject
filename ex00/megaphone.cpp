/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:08:23 by hacharka          #+#    #+#             */
/*   Updated: 2026/01/24 17:08:24 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int main(int ac, char *av[])
{
	if (ac == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string line = av[i];
		std::transform(line.begin(), line.end(), line.begin(), ::toupper);
		std::cout << line;
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}
