/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:43:55 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/28 17:43:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string call);
    ClapTrap(const ClapTrap& copy);

    ClapTrap&   operator=(const ClapTrap& copy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ~ClapTrap();
};

#endif