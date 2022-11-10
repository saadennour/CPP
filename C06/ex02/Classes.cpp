/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:46:49 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/10 07:42:56 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base::~Base()
{
    std::cout << "Destructor is called\n";
}

Base *generate(void)
{
    std::srand(time(NULL));
    int random = std::rand();

    if (random % 2 == 0)
        return (new A());
    else if (random % 5 == 0)
        return (new B());
    return (new C());
}

void identify(Base* p)
{
    A   *a = dynamic_cast<A*>(p);
    B   *b = dynamic_cast<B*>(p);
    C   *c = dynamic_cast<C*>(p);

    if (a)
        std::cout << "The object pointed to is A\n";
    if (b)
        std::cout << "The object pointed to is B\n";
    if (c)
        std::cout << "The object pointed to is C\n";
}

void identify(Base& p)
{
    try
    {
        A   &a = dynamic_cast<A&>(p);
        std::cout << "The object pointed to is A\n";
        a.~A();
    }
    catch(const std::exception& e)
    {
        
    }
    
    try
    {
        B   &b = dynamic_cast<B&>(p);
        std::cout << "The object pointed to is B\n";
        b.~B();
    }
    catch(const std::exception& e)
    {

    }
    try
    {
        C   &c = dynamic_cast<C&>(p);
        std::cout << "The object pointed to is C\n";
        c.~C();
    }
    catch(const std::exception& e)
    {

    }
}