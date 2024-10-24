/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:33:26 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 22:04:22 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int x = -1;
	Zombie *zombi;
	zombi = zombieHorde(4, "Rijik");
	while (++x != 4)
		zombi->announce();
	delete[] zombi;
	Zombie *zombi2;
	zombi2 = zombieHorde(2, "Chiko");
	x = -1;
	while (++x != 2)
		zombi2->announce();
	delete[] zombi2;
	return (0);
}