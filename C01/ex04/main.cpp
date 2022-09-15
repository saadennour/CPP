/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/15 05:12:16 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

char	*fill_str(char *ptr, char *word, char **av)
{
	int	i, j, x;
	int	len;
	char	*new_word;

	i = 0;
	j = 0;
	x = 0;
	len = strlen(av[3]) + strlen(word);
	new_word = new char[len];
	while (i < ptr - word)
		new_word[i++] = word[j++];
	while (av[3][x])
		new_word[i++] = av[3][x++];
	j += strlen(av[2]);
	while (word[j])
		new_word[i++] = word[j++];
	new_word[i] = '\0';
	return (new_word);
}

void	replace_word(std::string line, char **av)
{
	int	i;
	int	j;
	int	len;
	char	*word;
	char	*ptr;
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
		ptr = strstr(word, av[2]);
		if (ptr && j != 0)
			file << fill_str(ptr, word, av);
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
		std::cout << word << "\n";
		replace_word(word, av);
	}
	return (0);
}