/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:07 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 00:07:22 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "???";
	std::cout << "Default constructor of AMateria is called\n";
}

AMateria::AMateria(std::string name)
{
	type = name;
	std::cout << "Parameterized constructor of AMateria is called\n";
}

AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria is called\n";
}

std::string const &AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter&  target)
{
	// std::cout << target.name << "\n";
}