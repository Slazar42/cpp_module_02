/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:56:07 by slazar            #+#    #+#             */
/*   Updated: 2023/10/31 18:46:37 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0, 2.5f);
	Point b(3.13f, -1);
	Point c(-1, -3);
	Point point(0.5f, 0.5f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "point = " << point << std::endl;
	
	if (bsp(a, b, c, point))
		std::cout << "point is inside the triangle" << std::endl;
	else
		std::cout << "point is outside the triangle" << std::endl;
}