/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:25:56 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 17:29:30 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char*	Span::OutofBound::what() const throw()
{
	return ("You went out of range\n");
}

Span::Span()
{
	std::cout << "Default constructor is called\n";
}

Span::Span(unsigned int n)
{
	container.resize(n);
	std::cout << "Parameterized constructor is called\n";
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span&	Span::operator=(const Span& copy)
{
	std::cout << "Assignment operator is called\n";
	for (size_t i = 0; i < copy.container.size(); i++)
		this->container[i] = copy.container[i];
	return (*this);
}

void	Span::addNumber(int num)
{
	for (size_t	i = 0; i < container.size(); i++)
	{
		if (container[i] == 0)
		{
			container[i] = num;
			return ;
		}
	}
	throw OutofBound();	
}

void	Span::addaBunch(size_t num)
{
	std::srand(time(NULL));
	for (size_t i = 0; i < num; i++)
	{
		int ran = std::rand();
		addNumber(ran);
	}
}

int	Span::shortestSpan()
{
	int	start = INT_MAX;

	std::vector<int> copy = this->container;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++)
	{
		if (copy[i + 1] - copy[i] < start)
			start = copy[i + 1] - copy[i];
	}
	std::cout << std::endl;
	return (start);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(this->container.begin(), this->container.end());
	max = std::max_element(this->container.begin(), this->container.end());
	
	return (*max - *min);
}

Span::~Span()
{
	std::cout << "Destructor is called\n";
}
