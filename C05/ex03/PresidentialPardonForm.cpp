/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 07:28:36 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 01:28:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 0, 25, 5)
{
	std::cout << "Default constructor of PresidentialPardonForm is called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("PresidentialPardonForm", 0, 25, 5)
{
	std::cout << "Parameterized constructor of PresidentialPardonForm is called\n";
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy):Form("PresidentialPardonForm", 0, 25, 5)
{
	std::cout << "Copy constructor of PresidentialPardonForm is called\n";
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	this->target = copy.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm is called\n";
}

void	PresidentialPardonForm::beSigned(Bureaucrat &client)
{
	(client.getGrade() <= 25) ? this->setSign(1) : throw GradeTooLowException("Grade Too Low to sign the Form !");;
}

void	PresidentialPardonForm::execute(Bureaucrat const &client) const
{
	if (this->getSign() && client.getGrade() <= 5)
		std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
	else
		throw GradeTooLowException("Grade Too Low to execute PresidentialPardonForm\n");
}