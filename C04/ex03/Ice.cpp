/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:14 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/03 02:51:02 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "Default of constructor of Ice is called\n";
}

Ice::Ice(std::string name)
{
	type = name;
	std::cout << "Parameterized of constructor of Ice is called\n";
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
	std::cout << "Copy constructor of Ice is called\n";
}

Ice::~Ice()
{
	std::cout << "Destructor of Ice is called\n";
}

Ice&	Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	return (*this);
}

AMateria*   Ice::clone() const
{
    AMateria *clone = new Ice();
    return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}