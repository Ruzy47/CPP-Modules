/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:21:18 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/14 13:15:18 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string fn;
		std::string ln;
		std::string nick;
		std::string pn;
		std::string sec;
	public:
		Contact();
		~Contact();
		
		void	set_fn(std::string str);
		void	set_ln(std::string str);
		void	set_nick(std::string str);
		void	set_pn(std::string str);
		void	set_sec(std::string str);
		const std::string	&get_fn(void) const;
		const std::string	&get_ln(void) const;
		const std::string	&get_nick(void) const;
		const std::string	&get_pn(void) const;
		const std::string	&get_sec(void) const;
};

#endif
