/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/21 05:52:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

char	*fill_str(char *ptr, char *word, char **av, int *index)
{
	int	i = ptr - word;
	int	j = i + strlen(av[2]);
	int y = 0;

	while (word[y] != '\0')
		y++;
	std::cout << word << "|\n";
	std::cout << y << " " << i << " " << j << "\n";
	char	*right = new char[y - j + 2];
	y = 0;
	for (int x = j; word[x] != '\0' ; x++)
	{
		// std::cout << word[x] << "|\n"; 
		right[y++] = word[x];
	}
	right[y] = '\0';
	for (size_t x = 0; x < strlen(av[3]); x++)
		word[i++] = av[3][x];
	std::cout << right << "|\n";
	for (size_t x = 0; right[x] != '\0' ; x++)
		word[i++] = right[x];
	*index = i;
	std::cout << word << "| " << *index << "\n\n";
	return (word);
}

void	replace_word(std::string line, char **av)
{
	int i = 0, j = 0;
	int	len = (line.length()) + strlen(av[3]) + 1;
	char	*word = new char[42];
	char	copy_file[100000] = "";
	char	*ptr = NULL;
	std::fstream	file;

	strcat(copy_file, av[1]);
	strcat(copy_file,".replace");
	file.open(copy_file, std::ios::out | std::ios::app);
	if (!file)
	{
		std::cout << "File didn't open successfully !" << std::endl;
		exit (1);
	}
	std::cout << "len is :" << len << "\n";
	while (i < len)
	{
		if (line[i] == ' ' || line[i] == '\t' || i+1 == len)
		{
			if (len <= i+1)
				word[j++] = line[i++];
			word[j] = '\0';
			ptr = strstr(word, av[2]);
			if (ptr != NULL)
				word = fill_str(ptr, word, av , &j);
			if (strlen(word) == (size_t)len)
				break ;
		}
		word[j++] = line[i++];
	}
	word[j] = '\0';
	std::cout << "\n\n************LLL\n" << line << "\n len = " << len << "\n\n**************\n\n";
	std::cout << "\n\n************\n" << word << "\n i = " << strlen(word) << "\n\n**************\n\n";
	file << word << "\n";
	file.close();
	// delete [] word;
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