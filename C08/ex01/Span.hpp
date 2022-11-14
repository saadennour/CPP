/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:25:58 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 00:31:20 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
private:
	std::vector<int> container;
	unsigned int i;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& copy);

	Span&	operator=(const Span& copy);

	void	addNumber(int num);

	template <typename T>
	void	addaBunch(T begin, T end)
	{
		for (T iter = begin; iter < end; iter++)
			addNumber(*iter);
	};

	class	OutofBound : public std::exception
	{
	public:
		const char* what() const throw();
	};

	int		shortestSpan();
	int		longestSpan();
	
	~Span();
};




#endif