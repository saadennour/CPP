/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:33 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 00:34:30 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of Brain is called\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Copy constructor of Brain is called\n";
    *this = copy;
}

Brain&  Brain::operator=(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
	{
		if (!copy.ideas[i].empty())
    		this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Assignement operator of Brain called\n";
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor of Brain is called\n";
}

std::string	Brain::getIdea(int N)
{
	if (N >= 0 && N < 100)
		return (ideas[N]);
	return (ideas[0]);
}

void	Brain::setIdea(std::string idea, int N)
{
	if (N >= 0 && N < 100)
		ideas[N] = idea;
}