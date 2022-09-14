/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:27:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/14 05:41:39 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

char	*fill_str(char c)
{
	char		*str;
	static int	len = 1;

	str = new char[len];
	str[len - 1] = c;
	str[len] = '\0';
	len++;
	return (str);
}

int main(int ac, char **av)
{
	std::fstream	file;
	std::fstream	replaced_file;
	char			copy_file[100] = "nothing";
	char			c;
	char			*word;

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
	strcpy(copy_file, av[1]);
	strcat(copy_file, ".replace");
	replaced_file.open(copy_file, std::ios::out);
	if (!replaced_file)
	{
		std::cout << "File didn't creat successfully !" << std::endl;
		return (1);
	}
	while (1)
	{
		while (!file.eof())
		{
			file >> c;
			while (c != ' ')
				break ;
			word = fill_str(c);
		}
		
	}
	// open file with fstream class
	// open another file and name it file.replace
	// read from file while u didnt reach eof or espace
	// compare the word with the buf he gave u to change
	// if true change it with second buf else keep going (wont need classes only functions)
	return (0);
}