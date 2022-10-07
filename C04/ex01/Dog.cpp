/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:49 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/06 22:39:50 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    thoughts = new Brain();
    std::cout << "Default constructor of Dog is called\n";
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
    delete thoughts;
    std::cout << "Destructor of Dog is called\n";
}

void    Dog::makeSound() const
{
    std::cout << "hoof....hoof....hoof\n";
}

// std::string Dog::getType()
// {
//     return (this->type);
// }
