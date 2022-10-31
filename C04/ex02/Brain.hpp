/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:40:53 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/31 18:40:54 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& copy);

    Brain&  operator=(const Brain& copy);

	std::string getIdea(int N);
	void	setIdea(std::string idea, int N);
    ~Brain();
};

#endif