/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:19:47 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/30 16:52:57 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal is called\n";
}

WrongAnimal::WrongAnimal(std::string _type)
{
	type = _type;
	std::cout << "Parameterized constructor of WrongAnimal is called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "Copy constructor of WrongAnimal is called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal is called\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some animals shouts\n";
}

std::string	WrongAnimal::getType() const
{
	return (type);
}