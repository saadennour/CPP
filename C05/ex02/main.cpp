/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 01:30:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	birth("birth");
		ShrubberyCreationForm	work("work");
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	client("thomas", 1561);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << '\n';
	}
	Bureaucrat	client("thomas", 150);
	ShrubberyCreationForm	birth("birth");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	Pardon("Pardon");
	try
	{
		birth.beSigned(client);
		birth.execute(client);
		robot.beSigned(client);
		robot.execute(client);
		Pardon.beSigned(client);
		Pardon.execute(client);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << '\n';
	}
	std::cout << birth << '\n';
	std::cout << robot << '\n';
	std::cout << Pardon << '\n';
	client.signForm(birth);
	client.signForm(robot);
	client.signForm(Pardon);
	client.executeForm(birth);
	client.executeForm(robot);
	client.executeForm(Pardon);
	// try
	// {
	// 	noble.GoLower();
	// 	noble2.GoHigher();
	// }
	// catch(std::exception &e)
	// {
	// 	std::cerr << "exception caught " << e.what() << '\n';
	// }
	return (0);
}