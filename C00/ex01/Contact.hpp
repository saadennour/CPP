/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:44:18 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/14 02:01:49 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkest_secret;

public :

	void	setfirstname(std::string input);
	void	setlastname(std::string input);
	void	setnickname(std::string input);
	void	setnumber(std::string input);
	void	setsecret(std::string input);

	int		empty_fields();

	std::string getfirstname(void);
	std::string getlastname(void);
	std::string	getnickname(void);
	std::string getnumber(void);
	std::string getsecret(void);
};


#endif