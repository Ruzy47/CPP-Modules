/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:13:27 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 14:35:19 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook()
{
	this->n = -1;
	this->x = -1;
	std::cout << "Enter the command:";
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add(void)
{
	std::string	str;

	this->n++;
	if (this->x != 7)
		this->x++;
	if (this->n == 8)
	{
		this->n = 0;
		this->x = 7;
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the first name: ";
		std::getline(std::cin, str);
		if (str == "")
		{
			std::cout << "Invalid input" << std::endl;
			this->n--;
			return ;
		}
		else
		{
			this->cont[this->n].set_fn(str);
			break ;
		}
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the last name: ";
		std::getline(std::cin, str);
		if (str == "")
		{
			std::cout << "Invalid input" << std::endl;
			this->n--;
			return ;
		}
		else
		{
			this->cont[this->n].set_ln(str);
			break ;
		}
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the nickname: ";
		std::getline(std::cin, str);
		if (str == "")
		{
			std::cout << "Invalid input" << std::endl;
			this->n--;
			return ;
		}
		else
		{
			this->cont[this->n].set_nick(str);
			break ;
		}
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, str);
		if (str == "")
		{
			std::cout << "Invalid input" << std::endl;
			this->n--;
			return ;
		}
		else
		{
			this->cont[this->n].set_pn(str);
			break ;
		}
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, str);
		if (str == "")
		{
			std::cout << "Invalid input" << std::endl;
			this->n--;
			return ;
		}
		else
		{
			this->cont[this->n].set_sec(str);
			break ;
		}
	}
	if (this->x != 7)
		this->x = this->n;
}

std::string	Phonebook::re_size(std::string str)
{
	
	if (str.size() > 9)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void	Phonebook::print(Contact contact)
{
	std::cout << "The contact's first name is " << contact.get_fn() << std::endl;
	std::cout << "The contact's last name is " << contact.get_ln() << std::endl;
	std::cout << "The contact's nickname is " << contact.get_nick() << std::endl;
	std::cout << "The cintact's phone number is " << contact.get_pn() << std::endl;
	std::cout << "The contact's darkest secret is " << contact.get_sec() << std::endl;
}

void	Phonebook::search(void)
{
	int	x;
	std::string	str;
	
	if (this->x > -1)
	{
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		
		x = this->x + 1;
		this->x = 0;
		while (this->x < x && !std::cin.eof())
		{
			str = this->x + 1 + '0';
			std::cout << "|" << std::setw(10) << str;
			str = this->re_size(cont[this->x].get_fn());
			std::cout << "|" << std::setw(10) << str;
			str = this->re_size(cont[this->x].get_ln());
			std::cout << "|" << std::setw(10) << str;
			str = this->re_size(cont[this->x].get_nick());
			std::cout << "|" << std::setw(10) << str;
			std::cout << "|" << std::endl;
			this->x++;
		}
		this->x--;
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		std::cout << "Select index: ";
		std::getline(std::cin, str);
		if (str.size() == 1 && str[0] >= '1' && str[0] <= this->x + 1  + '0')
			this->print(this->cont[std::stoi(str) - 1]);
		else
			std::cout << "Wrong index" << std::endl;
	}
	else
		std::cout << "There are no contacts." << std::endl;
}
