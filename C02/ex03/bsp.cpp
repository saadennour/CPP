/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:38:14 by sfarhan           #+#    #+#             */
/*   Updated: 2022/10/25 12:57:15 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	Point::Area(Point a, Point b, Point c)
{
	Fixed	Area;

	Area = (a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y))/2;
	if (Area.toFloat() < 0)
		return (Area.toFloat() * -1);
	return (Area.toFloat());
}

bool	Point::onvertex(Point a, Point b, Point c, Point p)
{
	if ((p.x == a.x || p.x == b.x || p.x == c.x) && (p.y == a.y || p.y == b.y || p.y == c.y))
		return (0);
	return (1);
}

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc, pab, pac, pbc;

	abc = roundf(Area(a, b, c));
	pab = roundf(Area(point, a, b));
	pac = roundf(Area(point, a, c));
	pbc = roundf(Area(point, b, c));

    if (abc == pab + pac + pbc && abc != 0 && onvertex(a, b, c, point) == 1)
        return (1);
    else
        return (0);
}