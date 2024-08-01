/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:33:26 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 22:01:21 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombi2;
	zombi2 = newZombie("Saro");
	zombi2->announce();
	delete zombi2;
	randomChump("Monte");
	Zombie zombi1("Vaxarshak");
	zombi1.announce();
	return (0);
}