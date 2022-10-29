/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:59:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/28 21:02:01 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
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