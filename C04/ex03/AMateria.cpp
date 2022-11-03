/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:07 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 23:17:24 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "???";
	std::cout << "Default constructor of AMateria is called\n";
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	std::cout << "Parameterized constructor of AMateria is called\n";
}

AMateria::~AMateria()
{
	std::cout << "Destructor of AMateria is called\n";
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const &AMateria::getType() const
{	
	return (type);
}

void	AMateria::use(ICharacter&  target)
{
	std::cout << "Nothing to be done for " << target.getName() << "\n";
}