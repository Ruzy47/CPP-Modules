/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:03 by rugrigor          #+#    #+#             */
/*   Updated: 2024/07/22 22:05:39 by rugrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	std::ifstream file;
	std::ifstream file1;
	std::string	filename;
	std::string str;
	std::string s1;
	std::string s2;
	std::string av;
	std::string av1;
	int	n;

	n = 0;
	if (argc == 4)
	{
		file.open(argv[1]);
		if (!file.is_open())
		{
			std::cout << "File is not open!" << std::endl;
			return (0);
		}
		filename = std::string(argv[1]) + ".replace";
		std::ofstream file1;
		file1.open(filename); 
		while (!file.eof() && std::getline(file, str))
		{
			if (argv[2] == argv[3])
				file1 << str;
			else
			{
				n = str.find(argv[2]);
				while (n != -1)
				{
					s1 = str.substr(0, n);
					s1 += argv[3];
					av = argv[2];
					av1 = argv[3];
					s2 = str.substr(n + av.size(), str.size() - 1);
					s1 += s2;
					str = s1;
					n = str.find(argv[2], n + av1.size());
				}
				str += '\n';
				file1 << str;
			}
		}
		file1.close();
		file.close();
	}
	else
		std::cout << "Wrong number of arguments!" << std::endl;
}