/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:07 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 21:19:16 by sfarhan          ###   ########.fr       */
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
	
}