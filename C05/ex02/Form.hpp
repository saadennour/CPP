/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 03:20:56 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/07 22:44:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <cstdlib>

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

	void		setSign(bool value);

    std::string getName()  const;
    bool        getSign() const;
    int         getGrade() const;
    int         getExec() const;

    virtual void	beSigned(Bureaucrat &client) = 0;
	virtual void	execute(Bureaucrat const &client) const = 0;


    virtual ~Form();
};

std::ostream&	operator<<(std::ostream &out, const Form& copy);

#endif