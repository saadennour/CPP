/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 10:30:52 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_word(std::string line, char **av)
{
	std::fstream	file;
	std::string		name;
	size_t	occ;

	name = av[1] + (std::string)".replace";
	file.open(name, std::ios::out | std::ios::app);
	if (!file)
	{
		std::cout << "The file couldn't open !" << std::endl;
		exit (1);
	}
	occ = line.find(av[2]);
	while (occ != std::string::npos)
	{
		line.erase(occ, strlen(av[2]));
		line.insert(occ, av[3]);
		occ = line.find(av[2], occ + strlen(av[3]));
	}
	file << line << "\n";
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
	file.close();
	return (0);
}