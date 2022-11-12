/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:25:58 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 17:29:35 by sfarhan          ###   ########.fr       */
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
public:
	Span();
	Span(unsigned int n);
	Span(const Span& copy);

	Span&	operator=(const Span& copy);

	void	addNumber(int num);
	void	addaBunch(size_t num);

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