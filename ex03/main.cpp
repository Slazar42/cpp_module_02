/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:56:07 by slazar            #+#    #+#             */
/*   Updated: 2023/10/31 20:51:47 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0, 0);
	Point b(3, 0);
	Point c(0,3);
	
	Point point(1, 1);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "point = " << point << std::endl;
	
	if (bsp(a, b, c, point))
		std::cout << "point is inside the triangle" << std::endl;
	else
		std::cout << "point is outside the triangle" << std::endl;
}