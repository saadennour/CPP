/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:38:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 14:36:14 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default constructor of Cat is called\n";
}

Cat::Cat(std::string name)
{
    type = name;
    std::cout << "Parameterized constructor of Cat is called\n";
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
    std::cout << "Destructor of Cat is called\n";
}

void    Cat::makeSound() const
{
	std::cout << "meow....meow....meow\n";
}
