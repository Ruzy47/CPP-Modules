/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:40:54 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/01 10:00:29 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int x = 0;
	int y = -1;
	
	if (argc > 1)
	{
		while (argv[++x])
		{
			y = -1;
			while (argv[x][++y])
				std::cout << (char)std::toupper(argv[x][y]);
			std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);	
}
