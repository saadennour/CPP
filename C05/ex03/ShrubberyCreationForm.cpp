/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 07:28:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 03:25:30 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 0, 145, 137)
{
	target = "none";
	std::cout << "Default constructor of ShrubberyCreationForm is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form("ShrubberyCreationForm", 0, 145, 137)
{
	std::cout << "Parameterized constructor of ShrubberyCreationForm is called\n";
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form("ShrubberyCreationForm", 0, 145, 137)
{
	std::cout << "Copy constructor of ShrubberyCreationForm is called\n";
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	this->target = copy.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of ShrubberyCreationForm is called\n";
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &client)
{
	(client.getGrade() <= 145) ? this->setSign(1) : throw GradeTooLowException("Grade Too Low to sign the Form !");;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &client) const
{
	if (this->getSign() && client.getGrade() <= 137)
	{
		std::fstream	file;
		std::string		name = target + (std::string)"_shrubbery";

		file.open(name, std::ios::out);
		file << "      /\\\n";
		file << "     /  \\\n";
		file << "    /    \\\n";
		file << "   /      \\\n";
		file << "  /        \\\n";
		file << " /          \\\n";
		file << "/            \\\n";
		file << "------  ------\n";
		file << "      | |\n";
		file << "      | |\n";
		file << "      | |\n";
		file << "      |_|\n";
		file.close();
	}
	else
		throw GradeTooLowException("Grade Too Low to execute ShrubberyCreationForm\n");
}