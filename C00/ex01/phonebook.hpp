/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:58 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 11:25:59 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

class Contact
{
public:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;
};

class PhoneBook
{
public:
    Contact contact[8];
};

void	add(PhoneBook *contacts);
void	search(PhoneBook *contacts);
int     ft_stoi(std::string str);

#endif