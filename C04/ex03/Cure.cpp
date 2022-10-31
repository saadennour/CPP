/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:10 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 21:16:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << "Default constructor of Cure is called\n";
}

Cure::Cure(std::string name)
{
	type = name;
	std::cout << "Parameterized constructor of Cure is called\n";
}

Cure::~Cure()
{
	std::cout << "Destructor of Cure is called\n";
}