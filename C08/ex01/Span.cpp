/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:25:56 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 01:29:59 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char*	Span::OutofBound::what() const throw()
{
	return ("You went out of range");
}

Span::Span()
{
	i = 0;
	std::cout << "Default constructor is called\n";
}

Span::Span(unsigned int n)
{
	i = 0;
	container.insert(container.begin(), n, 0);
	std::cout << "Parameterized constructor is called\n";
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span&	Span::operator=(const Span& copy)
{
	this->i = copy.i;
	std::cout << "Assignment operator is called\n";
	for (size_t i = 0; i < copy.container.size(); i++)
		this->container[i] = copy.container[i];
	return (*this);
}

void	Span::addNumber(int num)
{
	if (i == this->container.size())
		throw OutofBound();
	container[i] = num;
	i++;
}

int	Span::shortestSpan()
{
	int	start = INT_MAX;

	if (container.size() <= 1)
		throw OutofBound();
	std::vector<int> copy = this->container;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++)
	{
		if (copy[i + 1] - copy[i] < start)
			start = copy[i + 1] - copy[i];
	}
	return (start);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	if (container.size() <= 1)
		throw OutofBound();

	min = std::min_element(this->container.begin(), this->container.end());
	max = std::max_element(this->container.begin(), this->container.end());
	
	return (*max - *min);
}

Span::~Span()
{
	std::cout << "Destructor is called\n";
}
