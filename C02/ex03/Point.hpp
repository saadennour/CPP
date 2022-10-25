/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:38:33 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/25 12:57:43 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(const float i, const float j);
    Point(const Point& copy);

    Point&  operator=(const Point& copy);

    bool    bsp(Point const a, Point const b, Point const c, Point const point);
	bool	onvertex(Point a, Point b, Point c, Point p);
	float	Area(Point a, Point b, Point c);
    Fixed   getXpoint();
    Fixed   getYpoint();
    ~Point();
};


#endif