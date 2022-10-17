/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:43:58 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/17 01:21:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setfirstname(std::string input)
{
	firstname = input;
}

void	Contact::setlastname(std::string input)
{
	lastname = input;
}

void	Contact::setnickname(std::string input)
{
	nickname = input;
}

void	Contact::setnumber(std::string input)
{
	phonenumber = input;
}

void	Contact::setsecret(std::string input)
{
	darkest_secret = input;
}

std::string	Contact::getfirstname()
{
	return (this->firstname);
}

std::string	Contact::getlastname()
{
	return (this->lastname);
}

std::string	Contact::getnickname()
{
	return (this->nickname);
}

std::string	Contact::getnumber()
{
	return (this->phonenumber);
}

std::string	Contact::getsecret()
{
	return (this->darkest_secret);
}

int	Contact::empty_fields()
{
	if (this->firstname.length() == 0 || this->lastname.length() == 0
		|| this->nickname.length() == 0 || this->phonenumber.length() == 0
		|| this->darkest_secret.length() == 0)
		return (0);
	return (1);
}
