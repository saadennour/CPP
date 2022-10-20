/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/20 07:19:12 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

char	*fill_str(char *ptr, char *word, char **av)
{
	int	i=0, j=0, x=0;
	int	len = strlen(av[3]) + (strlen(word) - strlen(av[2]));
	char	*new_word = new char[len];

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
	int i = 0, j = 0;
	int	len = line.length() + strlen(av[3]);
	char	*word = new char[len];
	char	*ptr;
	char	copy_file[100] = "nothing";
	std::fstream	file;

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
		ptr = NULL;
		while (i < len)
		{
			if (line[i] == ' ' || line[i] == '\t')
			{
				word[j] = '\0';
				break ;
			}
			word[j++] = line[i++];
		}
		ptr = strstr(word, av[2]);
		if (ptr)
		{
			word = fill_str(ptr, word, av);
			for (size_t x = j; x < strlen(word); x++)
				j = x;
			j++;
		}
		if (line[i] == ' ' || line[i] == '\t')
			word[j++] = line[i];
		i++;
		if (i >= len)
		{
			word[j] = '\0';
			file << word << "\n";
			file.close();
			delete [] word;
			break ;
		}
	}
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