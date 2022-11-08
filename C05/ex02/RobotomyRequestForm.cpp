/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 07:28:38 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:49:19 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 0, 72, 45)
{
	std::cout << "Default constructor of RobotomyRequestForm is called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):Form("RobotomyRequestForm", 0, 72, 45)
{
	std::cout << "Parameterized constructor of RobotomyRequestForm is called\n";
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form("RobotomyRequestForm", 0, 72, 45)
{
	std::cout << "Copy constructor of RobotomyRequestForm is called\n";
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	this->target = copy.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm is called\n";
}

void	RobotomyRequestForm::beSigned(Bureaucrat &client)
{
	(client.getGrade() <= 72) ? this->setSign(1) : throw GradeTooLowException();
}

void	RobotomyRequestForm::execute(Bureaucrat const &client) const
{
	std::srand(time(NULL));
	int	random = std::rand();
	if (this->getSign() && client.getGrade() <= 45 && random % 2 == 0)
		std::cout << target << " has been robotomized successfully 50% of the time\n";
	else if (this->getSign() && client.getGrade() <= 45 && random % 2 != 0)
		std::cout << "Robotomy failed !!\n";
	else
		throw GradeTooLowException();
}