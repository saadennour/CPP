/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/18 23:39:00 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::init_contact(int i)
{
	contact[i].setfirstname("");
	contact[i].setlastname("");
	contact[i].setnickname("");
	contact[i].setnumber("");
	contact[i].setsecret("");
}

void	ft_putstr(std::string str)
{
	int	i;

	i = 0;
	while (str[i] && i < 9)
	{
		std::cout << str[i];
		i++;
	}
	if (str[i] && i == 9)
		std::cout << ".";
}

void	PhoneBook::add()
{
	static int  i;
	std::string input;

	if (i == 8)
		i = 0;
	init_contact(i);
	for (int j = 0; contact[i].getfirstname().length() == 0; j++)
	{
		std::cout << "Enter the first name : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		contact[i].setfirstname(input);
	}
	for (int j = 0; contact[i].getlastname().length() == 0; j++)
	{
		std::cout << "Enter the last name : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		contact[i].setlastname(input);
	}
	for (int j = 0; contact[i].getnickname().length() == 0; j++)
	{
		std::cout << "Enter the nickname : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		contact[i].setnickname(input);
	}
	for (int j = 0; contact[i].getnumber().length() == 0; j++)
	{
		std::cout << "Enter the phone number : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		contact[i].setnumber(input);
	}
	for (int j = 0; contact[i].getsecret().length() == 0; j++)
	{
		std::cout << "Enter the darkest secret : ";
		getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		contact[i].setsecret(input);
	}
	i++;
}

void	PhoneBook::search(void)
{
	int	index;
	std::string	str;

	for (int i = 0; contact[i].getlastname().length() > 0; i++)
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		if (contact[i].getfirstname().length() < 10)
			std::cout << std::setw(10) << contact[i].getfirstname();
		else
			ft_putstr (contact[i].getfirstname());
		std::cout << "|";
		if (contact[i].getlastname().length() < 10)
			std::cout << std::setw(10) << contact[i].getlastname();
		else
			ft_putstr (contact[i].getlastname());
		std::cout << "|";
		if (contact[i].getnickname().length() < 10)
			std::cout << std::setw(10) << contact[i].getnickname();
		else
			ft_putstr (contact[i].getnickname());
		std::cout << "\n";
	}
	std::cout << "Which contact you want to display : ";
	getline(std::cin, str);
	if (std::cin.eof())
		exit (1);
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			std::cout << "An alphabetic input is not possible !\n";
			return ;
		}
	}
	index = stoi(str);
	if (index > 7 || index < 0)
	{
		std::cout << "The contact you choosed is not available\n";
		return ;
	}
	if (contact[index].getfirstname().length() > 0)
	{
		std::cout << "\nFIRSTNAME      : " << contact[index].getfirstname() << "\n";
		std::cout << "LASTNAME       : " << contact[index].getlastname() << "\n";
		std::cout << "NICKNAME       : " << contact[index].getnickname() << "\n";
		std::cout << "PHONENUMBER    : " << contact[index].getnumber() << "\n";
		std::cout << "DARKEST_NUMBER : " << contact[index].getsecret() << "\n\n";
	}
	else
	{
		std::cout << "\nContact does not exist\n";
		return ;
	}
}
