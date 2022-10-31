/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:39:35 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 18:42:45 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    thoughts = new Brain();
    std::cout << "Default constructor of Dog is called\n";
}

Dog::Dog(std::string name)
{
    type = name;
	thoughts = new Brain();
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
	delete this->thoughts;
	this->thoughts = new Brain();
	*this->thoughts = *copy.thoughts;
    return (*this);
}

Dog::~Dog()
{
    delete thoughts;
    std::cout << "Destructor of Dog is called\n";
}

void	Dog::setThought(std::string Thought, int N)
{
	thoughts->setIdea(Thought, N);
}

std::string	Dog::getThought(int N)
{
	if (!thoughts->getIdea(N).empty())
		return (thoughts->getIdea(N));
	return ("fluff");
}

void    Dog::makeSound() const
{
    std::cout << "hoof....hoof....hoof\n";
}
