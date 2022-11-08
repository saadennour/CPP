/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/08 01:06:10 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	noble("george", 150);
	Bureaucrat	noble2("fred", 1);

	std::cout << noble;
	std::cout << noble2;

	try
	{
		Bureaucrat	worker("sam", 151);
		Bureaucrat	worker2("michael", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	
	try
	{
		noble.GoLower();
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	try
	{
		noble2.GoHigher();
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	noble.GoHigher();
	noble2.GoLower();

	std::cout << noble;
	std::cout << noble2;	
	return (0);
}