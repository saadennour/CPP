/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:09 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/07 21:47:04 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	noble("george", 12);
	Bureaucrat	noble2("fred", -1);

	std::cout << noble.getGrade() << " " << noble.getName() << "\n";
	std::cout << noble2.getGrade() << " " << noble2.getName() << "\n";
	return (0);
}