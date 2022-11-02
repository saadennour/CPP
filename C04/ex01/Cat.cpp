/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:42 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 00:37:42 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    thoughts = new Brain();
    std::cout << "Default constructor of Cat is called\n";
}

Cat::Cat(std::string name)
{
    type = name;
	thoughts = new Brain();
    std::cout << "Parameterized constructor of Cat is called\n";
}


Cat::Cat(const Cat& copy)
{
    std::cout << "Copy constructor of Cat is called\n";
	thoughts = new Brain();
    *this = copy;
}

Cat&    Cat::operator=(const Cat& copy)
{
    this->type = copy.type;
	delete this->thoughts;
	this->thoughts = new Brain();
	*this->thoughts = *copy.thoughts;
    return (*this);
}

Cat::~Cat()
{
    delete thoughts;
    std::cout << "Destructor of Cat is called\n";
}

void	Cat::setThought(std::string Thought, int N)
{
	thoughts->setIdea(Thought, N);
}

std::string	Cat::getThought(int N)
{
	if (!thoughts->getIdea(N).empty())
		return (thoughts->getIdea(N));
	return ("fluff");
}

void    Cat::makeSound() const
{
    std::cout << "meow....meow....meow\n";
}