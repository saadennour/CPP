/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 23:01:42 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	client("thomas", 4);

	ShrubberyCreationForm	Tree("Tree");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	Pardon("Pardon");
	try
	{
		Tree.beSigned(client);
		Tree.execute(client);
		robot.beSigned(client);
		robot.execute(client);
		Pardon.beSigned(client);
		Pardon.execute(client);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << '\n';
	}
	std::cout << Tree << '\n';
	std::cout << robot << '\n';
	std::cout << Pardon << '\n';
	std::cout << "\n\n**************\n\n";
	client.signForm(Tree);
	client.signForm(robot);
	client.signForm(Pardon);

	return (0);
}