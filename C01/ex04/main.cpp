/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/22 05:15:10 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	replace_word(std::string line, char **av)
{
	std::fstream	file;
	std::string		name;
	std::string		before;
	std::string		after;
	std::string		input;
	size_t	occ, len, focc;

	name = av[1] + (std::string)".replace";
	file.open(name, std::ios::in | std::ios::app);
	if (!file)
	{
		std::cout << "The file couldn't open !" << std::endl;
		exit (1);
	}
	occ = line.find(av[2]);
	if (occ != std::string::npos)
	{
		if (occ > 0)
		{
			before = line.substr(0, occ);
			input = before;
		}
		while (occ != std::string::npos)
		{
			input += av[3];
			focc = occ;
			occ = line.find(av[2], strlen(av[2]) + occ);
			len = occ - (focc + strlen(av[2]));
			after = line.substr(focc + strlen(av[2]), len);
			input += after;
		}
		file << input;
	}
	else
		file << line;
	file << "\n";
	file.close();	
}

int main(int ac, char **av)
{
	std::fstream	file;
	std::string		line;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	file.open(av[1], std::ios::in);
	if (!file)
	{
		std::cout << "There is no such file in this directory or the file couldn't open !" << std::endl;
		return (1);
	}
	while (!file.eof())
	{
		std::getline(file, line);
		replace_word(line, av);
	}
	return (0);
}