/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:04:31 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/01 21:02:38 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	IMATERIASOURCE_HPP
#define	IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif