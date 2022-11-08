/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 03:20:54 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 23:06:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is Higher than the required");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is Lower than the required");
}

Form::Form():name("none"),grade(1),exec(1)
{
	signature = 0;
	std::cout << "Default constructor of Form is called\n";
}

Form::Form(std::string _name, bool sign, int _grade, int _exec):name(_name),grade(_grade),exec(_exec)
{
	signature = sign;
	std::cout << "Parameterized constructor of Form is called\n";
	if (_grade < 1 || _exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade > 150 || _exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy):name(copy.name),grade(copy.grade),exec(copy.exec)
{
	std::cout << "Copy constructor of Form is called\n";
	*this = copy;
}

Form&	Form::operator=(const Form& copy)
{
	signature = copy.signature;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor of Form is called\n";
}

void	Form::setSign(bool value)
{
	signature = value;
}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getSign() const
{
	return (signature);
}

int		Form::getGrade() const
{
	return (grade);
}

int		Form::getExec() const
{
	return (exec);
}

void	Form::beSigned(Bureaucrat &client)
{
	(client.getGrade() <= this->getGrade()) ? signature = 1 : throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream	&out, const Form &copy)
{
	out << copy.getName() << " is ";
	(copy.getSign()) ? out << "a signed Form of " : out << "a none signed Form of ";
	out << copy.getGrade() << " grade to sign it, and " << copy.getExec() << " to execute it";
	return (out);
}