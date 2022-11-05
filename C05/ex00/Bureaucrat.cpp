/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:14:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/05 05:01:29 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	grade = 1;
	std::cout << "Default constructor has been called\n";
}

void	exthrow(int value)
{
	if (value < 1 || value > 150)
		throw value;
}

Bureaucrat::Bureaucrat(const std::string word, int value):name(word)
{
	try
	{
		exthrow(value);
		grade = value;
	}
	catch(int value)
	{
		std::cerr << "exception caught" << '\n';
	}
	std::cout << "Parameterized constructor has been called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
	std::cout << "Copy constructor has been called\n";
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	(std::string)this->name = copy.name;
	this->grade = copy.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor has been called\n";
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::GoHigher()
{
	this->grade--;
}

void	Bureaucrat::GoLower()
{
	this->grade++;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &copy)
{
	out << copy.getName() << " bureaucrat grade " << copy.getGrade() << "\n";
	return (out);
}