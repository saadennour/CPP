/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:38:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:44:09 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private :
	const std::string name;
	int	grade;
public :
	Bureaucrat();
	Bureaucrat(const std::string word, int value);
	Bureaucrat(const Bureaucrat& copy);

	Bureaucrat& operator=(const Bureaucrat& copy);

	std::string getName() const;
	int		getGrade() const;
	void	GoHigher();
	void	GoLower();

	void	signForm(const Form &contract);
	void	executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	~Bureaucrat();
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& copy);

#endif