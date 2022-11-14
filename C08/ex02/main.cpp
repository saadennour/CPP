/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:34:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/14 01:04:42 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<double> dstack;


	dstack.push(10.5);
	dstack.push(1.5);
	dstack.push(23.25);

	std::cout << dstack.top() << std::endl;
	(dstack.empty()) ? std::cout << "its empty\n" : std::cout << "its filled\n";
	dstack.pop();
	dstack.pop();
	dstack.pop();
	(dstack.empty()) ? std::cout << "its empty\n" : std::cout << "its filled\n";

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(1);

	std::cout << "\n********\n\n";
	std::cout << mstack.size() << std::endl;
	std::cout << mstack.top() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	// MutantStack<int>::const_iterator cit = mstack.cbegin();


	std::cout << "\n********\n\n";

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\n********\n\n";

	std::cout << "REVERSED ITERATOR : \n";

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "\n********\n\n";

	// *cit += 1;
	
	(mstack.empty()) ? std::cout << "its empty\n" : std::cout << "its filled\n";

	std::stack<int> s(mstack);
	
	return (0);
}