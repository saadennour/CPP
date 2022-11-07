/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:37:20 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 03:22:31 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor of Intern is called\n";
}

// Intern::Intern(const Intern &copy)
// {
// 	std::cout << "Copy constructor of Intern is called\n";
// 	*this = copy;
// }

// Inter&	Intern::operator=(const Intern &copy)
// {
// 	return (*this);
// }

Intern::~Intern()
{
	std::cout << "Destructor of Intern is called\n";
}

Form*	Intern::makeForm(std::string _name, std::string _target)
{
	std::string	forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	
	for (int i = 0; i < 3; i++)
	{
		if (_name == forms[i])
		{
			switch (_name[0])
			{
			case 'r':
				return (new RobotomyRequestForm(_target));
			case 's':
				return (new ShrubberyCreationForm(_target));
			case 'p':
				return (new PresidentialPardonForm(_target));
			}
		}
	}
	throw Form::
}