/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:37:14 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/02 02:03:02 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private :
	AMateria	*Materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);

    MateriaSource &operator=(const MateriaSource &copy);

    void    learnMateria(AMateria* source);
    AMateria    *createMateria(std::string const &type);

    ~MateriaSource();
};



#endif