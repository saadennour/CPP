/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 11:25:42 by sfarhan          ###   ########.fr       */
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

int ft_strcmp(std::string str, std::string str2)
{
    int x;

    x = str.compare(str2);
    if (x == 0)
        return (0);
    return (1);
}

void    command(std::string cmd, PhoneBook *phonebook)
{
    if (ft_strcmp(cmd, "ADD") == 0 || ft_strcmp(cmd, "add") == 0)
        add(phonebook);
    else if (ft_strcmp(cmd, "SEARCH") == 0 || ft_strcmp(cmd, "search") == 0)
        search(phonebook);
    else if (ft_strcmp(cmd, "EXIT") == 0 || ft_strcmp(cmd, "exit") == 0)
        exit(0);
    else
        std::cout << "This option is not available, try again !\n";
}

int main()
{
    PhoneBook   phonebook;
    std::string cmd;

    while (1)
    {
        std::cout << "Print an option : ";
        getline(std::cin, cmd);
        command(cmd, &phonebook);
        std::cout << "\n***********\n\n";
    }
    return (0);
}