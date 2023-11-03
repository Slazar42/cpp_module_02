/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:55:57 by slazar            #+#    #+#             */
/*   Updated: 2023/10/31 18:14:46 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool isPointOnLine(Fixed x, Fixed y, Fixed x1, Fixed y1, Fixed x2, Fixed y2) {
	if (x2 == x1)
		std::cout << "can't divide by 0 \"x1 == x2\"" << std::endl;
    Fixed m = (y2 - y1) / (x2 - x1);
    Fixed b = y1 - m * x1;
    return (y == m * x + b);
}

Fixed   absValue(Fixed value) {
    if (value < 0)
        return value * -1;
    return value;
}

Fixed   areaOfTriangle(Point a, Point b, Point c) {
    return (((a.getX()*(b.getY()-c.getY()))+(b.getX()*(c.getY()-a.getY()))+(c.getX()*(a.getY()-b.getY()))) /2);
}

bool bsp( Point const a, Point const b, Point const c, Point point) {
	if(isPointOnLine(point.getX(), point.getY(), a.getX(), a.getY(), b.getX(), b.getY()) ||
		isPointOnLine(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY()) ||
		isPointOnLine(point.getX(), point.getY(), c.getX(), c.getY(), a.getX(), a.getY()))
		return false;
    Fixed   abcArea = absValue(areaOfTriangle(a,b,c));
    Fixed   pabArea = absValue(areaOfTriangle(point,a,b));
    Fixed   pbcArea = absValue(areaOfTriangle(point,b,c));
    Fixed   pcaArea = absValue(areaOfTriangle(point,c,a));

    return  (abcArea == pabArea + pbcArea + pcaArea);
}