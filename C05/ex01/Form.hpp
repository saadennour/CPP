/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 03:20:56 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:27:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    bool    signature;
    const int grade;
    const int exec;
public:
    Form();
    Form(std::string _name, bool sign, int _grade, int _exec);
    Form(const Form& copy);

    Form&   operator=(const Form& copy);

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

    std::string getName()  const;
    bool        getSign() const;
    int         getGrade() const;
    int         getExec() const;

    void        beSigned(Bureaucrat &client);

    ~Form();
};

std::ostream&	operator<<(std::ostream &out, const Form& copy);

#endif