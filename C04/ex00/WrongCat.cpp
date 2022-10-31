/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:25:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/30 16:53:01 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor of WrongCat is called\n";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	std::cout << "Copy constructor of WrongCat is called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& copy)
{
	this->type = copy.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat is called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "meow...meow...meow\n";
}