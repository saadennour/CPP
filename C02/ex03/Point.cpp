/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:38:26 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/26 18:37:35 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{

}

Point::Point(const Point& copy):x(copy.x), y(copy.y)
{

}

Point::Point(const float i, const float j):x(i), y(j)
{

}

Point::~Point()
{

}

Point&  Point::operator=(const Point& copy)
{
    (Fixed)this->x = copy.x;
    (Fixed)this->y = copy.y;
    return (*this);
}

Fixed   Point::getXpoint()
{
    return (this->x);
}

Fixed   Point::getYpoint()
{
    return (this->y);
}
