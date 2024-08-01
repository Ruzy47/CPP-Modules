/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:47:04 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 16:18:35 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook ph;
	std::string line;

	while(1)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			ph.add();
			if (!std::cin.eof())
				std::cout << "Enter the command:";
		}
		else if (line == "SEARCH")
		{
			ph.search();
			if (!std::cin.eof())
				std::cout << "Enter the command:";
		}
		if (std::cin.eof() || line == "EXIT")
		{
			std::cout << "The contacts are lost forever!" << std::endl;
			break ;
		}
		else if (!std::cin.eof())
			std::cout << "Wrong command, enter the new command:";
	}
	return (0);
}

