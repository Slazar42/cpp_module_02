/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:50:27 by slazar            #+#    #+#             */
/*   Updated: 2023/10/31 15:36:08 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const Point &point);
		Point(const float x, const float y);
		~Point();
		Point&	operator= (const Point &point);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		friend	std::ostream&	operator<<(std::ostream& os, const Point& point);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif