/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:13:11 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 13:23:46 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	cont[8];
		int		n;
		int		x;
	public:
		Phonebook();
		~Phonebook();
		void	add(void);
		void	search(void);
		void	print(Contact contact);
		std::string	re_size(std::string str);
};

#endif