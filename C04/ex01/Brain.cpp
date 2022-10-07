/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:39:33 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/06 22:39:34 by sfarhan          ###   ########.fr       */
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

// Brain&  Brain::operator=(const Brain& copy)
// {
//     this->ideas = copy.ideas;
//     return (*this);
// }

Brain::~Brain()
{
    std::cout << "Destructor of Brain is called\n";
}