/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/14 04:32:07 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_strchr(std::string str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_stoi(std::string str)
{
    int             i;
    int             sign;
    unsigned long   res;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] && ft_strchr(" \n\t\r\f\v", str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
		if (res > 9223372036854775807 && sign == 1)
			return (-1);
		if (res >= 9223372036854775807 && sign == -1)
			return (0);
		i++;
    }
    res *= sign;
    return (res);
}

int	Contact::empty_fields()
{
	if (this->firstname.length() == 0 || this->lastname.length() == 0
		|| this->nickname.length() == 0 || this->phonenumber.length() == 0
		|| this->darkest_secret.length() == 0)
		return (0);
	return (1);
}

void	PhoneBook::init_contact(int i)
{
	this->contact[i].setfirstname("");
	this->contact[i].setlastname("");
	this->contact[i].setnickname("");
	this->contact[i].setnumber("");
	this->contact[i].setsecret("");
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
	std::cout << "Enter the first name : ";
	getline(std::cin, input);
	this->contact[i].setfirstname(input);
	std::cout << "Enter the last name : ";
	getline(std::cin, input);
	this->contact[i].setlastname(input);
	std::cout << "Enter the nickname : ";
	getline(std::cin, input);
	this->contact[i].setnickname(input);
	std::cout << "Enter the phone number : ";
	getline(std::cin, input);
	this->contact[i].setnumber(input);
	std::cout << "Enter the darkest secret : ";
	getline(std::cin, input);
	this->contact[i].setsecret(input);
	if (this->contact[i].empty_fields() == 0)
	{
		std::cout << "You have entered an empty field, try again !\n";
		this->init_contact(i);
		return ;
	}
	i++;
}

void	PhoneBook::search(void)
{
	int	index;
	std::string	str;

	while (1)
	{
		std::cout << "Which contact you want to display : ";
		getline(std::cin, str);
		for (unsigned long i = 0; i < str.length(); i++)
		{
			if (isalpha(str[i]))
			{
				std::cout << "An alphabetic input is not possible !\n";
				return ;
			}
		}
		index = ft_stoi(str);
		if (index > 7 || index < 0)
		{
			std::cout << "The contact you choosed is not available\n";
			return ;
		}
		if (this->contact[index].getfirstname().length() > 0)
		{
			std::cout << std::setw(9);
			std::cout << index << "|";
			if (10 - this->contact[index].getfirstname().length() > 0)
				std::cout << std::setw(10 - this->contact[index].getfirstname().length());
			ft_putstr (this->contact[index].getfirstname());
			std::cout << "|";
			if (10 - this->contact[index].getlastname().length() > 0)
				std::cout << std::setw(10 - this->contact[index].getlastname().length());
			ft_putstr (this->contact[index].getlastname());
			std::cout << "|";
			if (10 - this->contact[index].getnickname().length() > 0)
				std::cout << std::setw(10 - this->contact[index].getnickname().length());
			ft_putstr (this->contact[index].getnickname());
			std::cout << "\n";
		}
		else
		{
			std::cout << "\nContact does not exist\n";
			return ;
		}
	}
}