/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:59:29 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/29 21:11:36 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string call);
    FragTrap(const FragTrap& copy);

    FragTrap&   operator=(const FragTrap& copy);

    void    attack(const std::string& name);
    void    HighFivesGuys(void);

    ~FragTrap();
};


#endif