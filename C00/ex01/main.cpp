/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:47:30 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/18 23:23:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    command(std::string cmd, PhoneBook *phonebook)
{
    if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0)
        phonebook->add();
    else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0)
        phonebook->search();
    else if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0)
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
		if(std::cin.eof())
			exit(1);
        command(cmd, &phonebook);
        std::cout << "\n***********\n\n";
    }
    return (0);
}