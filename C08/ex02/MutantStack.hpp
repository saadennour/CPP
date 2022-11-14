/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:34:43 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 01:03:04 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin()
	{
		return this->c.begin();
	};

	iterator end()
	{
		return this->c.end();
	};

	const_iterator cbegin() const
	{
		return this->c.cbegin();
	};

	const_iterator cend() const
	{
		return this->c.cend();
	};

	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	};

	reverse_iterator	rend()
	{
		return this->c.rend();
	};

	MutantStack(){};
	MutantStack(const MutantStack& copy)
	{
		*this = copy;
	};

	MutantStack& operator=(const MutantStack& copy)
	{
		this->c = copy.c;
		return (*this);
	};

	~MutantStack(){};
};


#endif