/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:25:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/09/08 11:25:28 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string  is_upper(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    int     i;
    std::string  str;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (av[i])
        {
            str = is_upper(av[i]);
            std::cout << str;
            i++;
        }
    }
    std::cout << "\n";
}