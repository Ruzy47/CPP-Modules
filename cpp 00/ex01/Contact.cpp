/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:21:07 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/14 13:15:56 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_fn(std::string str)
{
	this->fn = str;
}

void	Contact::set_ln(std::string str)
{
	this->ln = str;
}

void	Contact::set_nick(std::string str)
{
	this->nick = str;
}

void	Contact::set_pn(std::string str)
{
	this->pn = str;
}

void	Contact::set_sec(std::string str)
{
	this->sec = str;
}

const std::string	&Contact::get_fn(void) const
{
	return (this->fn);
}

const std::string	&Contact::get_ln(void) const
{
	return (this->ln);
}

const std::string	&Contact::get_nick(void) const
{
	return (this->nick);
}

const std::string	&Contact::get_sec(void) const
{
	return (this->sec);
}

const std::string	&Contact::get_pn(void) const
{
	return (this->pn);
}