/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:37:46 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 02:23:23 by sfarhan          ###   ########.fr       */
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
	// Inter(const Intern &copy);
	
	// Intern&	operator=(const Intern& copy);

	Form*	makeForm(std::string _name, std::string _target);

	~Intern();
};

#endif