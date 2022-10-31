/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:38:54 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 14:36:23 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default constructor of Dog is called\n";
}

Dog::Dog(std::string name)
{
    type = name;
    std::cout << "Parameterized constructor of Dog is called\n";
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Copy constructor of Dog is called\n";
    *this = copy;
}

Dog&    Dog::operator=(const Dog& copy)
{
    this->type = copy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called\n";
}

void    Dog::makeSound() const
{
    std::cout << "hoof....hoof....hoof\n";
}
