/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/07 21:47:04 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	std::cout << noble;
	std::cout << noble2;

	try
	{
		Bureaucrat	noble("george", 150);
		Bureaucrat	noble2("fred", 1);
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	try
	{
		noble.GoLower();
		noble2.GoHigher();
	}
	catch(std::exception &e)
	{
		std::cerr << "exception caught " << e.what() << '\n';
	}
	return (0);
}