/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:34:23 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 21:16:12 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string name);
	~Cure();
};




#endif