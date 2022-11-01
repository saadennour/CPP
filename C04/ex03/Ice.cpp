/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:14 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 01:58:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Default of constructor of Ice\n";
}

Ice::Ice(std::string name)
{
	type = name;
	std::cout << "Parameterized of constructor of Ice is called\n";
}

Ice::~Ice()
{
	std::cout << "Destructor of Ice is called\n";
}