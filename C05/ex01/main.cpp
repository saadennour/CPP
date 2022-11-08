/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:42:48 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form	birth("birth", 1, 200, 40);
		Form	work("work", 1, 100, 149);
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	Bureaucrat	client("thomas", 21);
	Form	birth("birth", 1, 20, 40);
	Form	work("work", 1, 100, 149);
	try
	{
		birth.beSigned(client);
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << '\n';
	}
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