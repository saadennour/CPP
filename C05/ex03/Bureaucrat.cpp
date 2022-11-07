/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:14:28 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/06 08:37:34 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	msg = error;
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return msg.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() _NOEXCEPT
{
	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	msg = error;
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return msg.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() _NOEXCEPT
{
	
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor has been called\n";
	grade = 1;
}

Bureaucrat::Bureaucrat(const std::string word, int value):name(word)
{
	std::cout << "Parameterized constructor has been called\n";
	if (value < 1)
		throw Bureaucrat::GradeTooHighException("this grade is too high");
	else if (value > 150)
		throw Bureaucrat::GradeTooLowException("this grade is too low");
	grade = value;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Copy constructor has been called\n";
	*this = copy;
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
	if (this->grade - 1 < 1)
		throw GradeTooHighException("U went too high !!");
	this->grade--;
}

void	Bureaucrat::GoLower()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException("U went too low !!");
	this->grade++;
}

void	Bureaucrat::signForm(const Form &contract)
{
	std::cout << this->getName();
	(contract.getSign()) ? std::cout << " signed " << contract.getName() << "\n" : std::cout << " couldn't sign " << contract.getName() << " because bureaucrat grade is lower than required grade to sign this form\n";
}

void	Bureaucrat::executeForm(Form const &form)
{
	std::cout << this->getName();
	(form.getSign() && grade <= form.getExec()) ? std::cout << " executed " : std::cout << " couldn't execute ";
	std::cout << form.getName() << "\n";
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &copy)
{
	out << copy.getName() << " bureaucrat grade " << copy.getGrade() << "\n";
	return (out);
}