/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:25:54 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 01:33:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(1);
		std::vector<int>	vect(100, 20);

		std::srand(time(NULL));
		for (std::vector<int>::iterator it = vect.begin(); it < vect.end(); it++)
		{
			int rand = std::rand();	
			*it = rand;
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}

		try
		{
			sp.addNumber(6);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	
		Span sp2(20);
		try
		{
			sp2.addaBunch(vect.begin(), vect.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	std::cout << "\n**********\n\n";
	{
		Span sp3 = Span(10000);
		std::vector<int>	vect(10000);

		std::srand(time(NULL));
		for (std::vector<int>::iterator it = vect.begin(); it < vect.end(); it++)
		{
			int rand = std::rand();	
			*it = rand;
		}
		try
		{
			sp3.addaBunch(vect.begin(), vect.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	
	return (0);
}