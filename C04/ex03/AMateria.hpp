/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:33:59 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 20:43:43 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>

class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const &type);

	std::string	const &getType()const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual	~AMateria();
};


#endif