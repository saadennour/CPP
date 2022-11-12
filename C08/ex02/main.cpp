/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:34:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/12 22:58:47 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	std::cout << "\n********\n\n";
	std::cout << mstack.size() << std::endl;
	std::cout << mstack.top() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "hello\n";
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	std::cout << "db hna >> : ";
	std::cout << *it << std::endl;
	--it;
	std::cout << "db hna >> : ";
	std::cout << *it << std::endl;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	std::stack<int> s(mstack);
	return (0);
}