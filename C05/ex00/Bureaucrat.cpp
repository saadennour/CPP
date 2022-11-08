/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:14:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:41:51 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade is Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade is Too Low");
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor of Bureaucrat has been called\n";
	grade = 1;
}

Bureaucrat::Bureaucrat(const std::string word, int value):name(word)
{
	std::cout << "Parameterized constructor of Bureaucrat has been called\n";
	if (value < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = value;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy):name(copy.name)
{
	std::cout << "Copy constructor of Bureaucrat has been called\n";
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	this->grade = copy.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of Bureaucrat has been called\n";
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
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::GoLower()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade++;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &copy)
{
	out << copy.getName() << " bureaucrat grade " << copy.getGrade() << "\n";
	return (out);
}