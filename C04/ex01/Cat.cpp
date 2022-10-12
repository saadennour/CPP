/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:42 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/06 22:39:43 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    thoughts = new Brain();
    std::cout << "Default constructor of Cat is called\n";
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Copy constructor of Cat is called\n";
    *this = copy;
}

Cat&    Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    delete thoughts;
    std::cout << "Destructor of Cat is called\n";
}

void    Cat::makeSound() const
{
    std::cout << "meow....meow....meow\n";
}

// std::string Cat::getType()
// {
//     return (this->type);
// }