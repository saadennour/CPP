/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/06 08:47:37 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Bureaucrat	client("thomas", 21);
	ShrubberyCreationForm	birth("birth");
	ShrubberyCreationForm	work("work");
	try
	{
		birth.beSigned(client);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << '\n';
	}
	birth.execute(client);
	std::cout << birth << '\n';
	std::cout << work << '\n';
	client.signForm(birth);
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