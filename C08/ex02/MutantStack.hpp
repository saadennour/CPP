/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:34:43 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 23:00:15 by sfarhan          ###   ########.fr       */
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
private:
	T	*stack;
	size_t	lenght;
public:
	MutantStack()
	{
		stack = new T;
	};
	MutantStack(size_t n)
	{
		stack = new T[n];
	};
	MutantStack(const MutantStack& copy)
	{
		stack = new T;
		*this = copy;
	};

	MutantStack& operator=(const MutantStack& copy)
	{
		lenght = copy.lenght;
		delete stack;
		stack = new T[lenght];
		for (size_t i = 0; i < lenght; i++)
			stack[i] = copy.stack[i];
		return (*this);
	};
	
	class iterator
	{
	private:
		T	*value;
	public:
		iterator(){};
		iterator(T *_value)
		{
			std::cout << "begin : " << &_value << '\n';
			value = _value;
		};
		iterator(const iterator& copy)
		{
			*this = copy;
		};

		iterator&	operator=(const iterator& copy)
		{
			this->value = copy.value;
			return (*this);	
		};

		bool	operator!=(const iterator& copy)
		{
			return (this->value != copy.value);
		};

		iterator&	operator++()
		{
			value++;
			return (*this);
		};

		T&	operator*()
		{
			return (*value);	
		};

		iterator&	operator--()
		{
			this->value--;
			return (*this);
		};

		T	getValue() const
		{
			return (*value);
		};
		~iterator(){};
	};
		
	MutantStack<T>::iterator	begin() const
	{
		std::cout << "begin : " << &stack[0] << '\n';
		MutantStack<T>::iterator	start(&stack[0]);
		return (start);
	};
	MutantStack<T>::iterator	end() const
	{
		MutantStack<T>::iterator	ending(&stack[this->size() - 1]);
		return (ending);
	};

	~MutantStack(){};
};


#endif