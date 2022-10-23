/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:06:16 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/23 08:34:15 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "memory address of str : " << &str << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl;
	std::cout << "the value of str is : " << str << std::endl;
	std::cout << "the value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "the value pointed to by stringREF : " << stringREF << std::endl;
	return (0);
}