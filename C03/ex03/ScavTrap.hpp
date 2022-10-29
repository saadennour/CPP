/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:07:59 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/28 21:08:00 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string call);
    ScavTrap(const ScavTrap& copy);

    ScavTrap&   operator=(const ScavTrap& copy);

    void    attack(const std::string& target);
    void    guardGate();
    ~ScavTrap();
};

#endif