/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/15 01:59:36 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	replace_word(std::string line, char **av)
{
	int	i;
	int	j;
	int	len;
	char	*word;
	char	copy_file[100] = "nothing";
	std::fstream	file;

	len = line.length();
	i = 0;
	strcpy(copy_file, av[1]);
	strcat(copy_file, ".replace");
	file.open(copy_file, std::ios::out | std::ios::app);
	if (!file)
	{
		std::cout << "File didn't creat successfully !" << std::endl;
		exit (1);
	}
	while (1)
	{
		j = 0;
		word = new char[len];
		while (i < len)
		{
			if (line[i] == ' ' || line[i] == '\t')
				break ;
			word[j++] = line[i++];
		}
		word[j] = '\0';
		if (strcmp(av[2], word) == 0)
			file << av[3];
		else
			file << word;
		if (line[i] == ' ' || line[i] == '\t')
			file << line[i];
		delete [] word;
		i++;
		if (i >= len)
		{
			file << "\n";
			file.close();
			break ;
		}
	}
}

int main(int ac, char **av)
{
	std::fstream	file;
	std::string		word;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	file.open(av[1], std::ios::in);
	if (!file)
	{
		std::cout << "There is no such in this directory !" << std::endl;
		return (1);
	}
	while (!file.eof())
	{
		std::getline(file, word);
		replace_word(word, av);
	}
	return (0);
}