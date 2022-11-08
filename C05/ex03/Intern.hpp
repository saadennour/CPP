/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:37:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 19:55:21 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
public :
	Intern();
	Intern(const Intern &copy);
	
	Intern&	operator=(const Intern& copy);

	Form*	makeForm(std::string _name, std::string _target);

	class FormError : public std::exception
	{
	public:
		const char* what() const throw();
	};
	
	~Intern();
};

#endif