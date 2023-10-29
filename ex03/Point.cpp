/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:51:29 by slazar            #+#    #+#             */
/*   Updated: 2023/10/29 20:54:56 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
}

Point::Point(const Point &point) : x(point.x), y(point.y) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::~Point() {
}

Point&	Point::operator= (const Point &point) {
	(void)point;
	return (*this);
}

Fixed	Point::getX(void) const {
	return (x);
}

Fixed	Point::getY(void) const {
	return (y);
}

std::ostream&	operator<<(std::ostream& os, const Point& point) {
	os << "Point(" << point.getX() << ", " << point.getY() << ")";
	return (os);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	(void)a;
	(void)b;
	(void)c;
	(void)point;
	return (true);
}

