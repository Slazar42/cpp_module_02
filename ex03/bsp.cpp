/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:55:57 by slazar            #+#    #+#             */
/*   Updated: 2023/10/31 20:52:54 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   absValue(Fixed value) {
    if (value < 0)
        return value * -1;
    return value;
}

Fixed   areaOfTriangle(Point a, Point b, Point c) {
    return (((a.getX()*(b.getY()-c.getY()))+(b.getX()*(c.getY()-a.getY()))+(c.getX()*(a.getY()-b.getY()))) /2);
}

bool bsp( Point const a, Point const b, Point const c, Point point) {
    Fixed   abcArea = absValue(areaOfTriangle(a,b,c));
	if (abcArea == 0)
		return false;
    Fixed   pabArea = absValue(areaOfTriangle(point,a,b));
	if (pabArea == 0)
		return false;
    Fixed   pbcArea = absValue(areaOfTriangle(point,b,c));
	if (pbcArea == 0)
		return false;
    Fixed   pcaArea = absValue(areaOfTriangle(point,c,a));
	if (pcaArea == 0)
		return false;

    return  (abcArea == pabArea + pbcArea + pcaArea);
}