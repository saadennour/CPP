/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:47:30 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/14 01:48:18 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
        phonebook->add();
    else if (ft_strcmp(cmd, "SEARCH") == 0 || ft_strcmp(cmd, "search") == 0)
        phonebook->search();
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