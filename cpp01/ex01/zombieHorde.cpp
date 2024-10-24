/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:01:52 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 21:03:51 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int x = -1;
	
	Zombie *zombi = new Zombie[N];
	while (++x != N)
		zombi[x].setName(name);
	return (zombi);
}