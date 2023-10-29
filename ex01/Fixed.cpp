/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:54:50 by slazar            #+#    #+#             */
/*   Updated: 2023/10/29 16:07:01 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called\n";
	n = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const int n_int) {
	std::cout << "Int constructor called\n";
	n = n_int << fractBit;
}

Fixed::Fixed(const float f_float) {
	std::cout << "Float constructor called\n";
	n = roundf(f_float * (1 << fractBit));
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called\n";
	n = fixed.n;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (n);
}

void	Fixed::setRawBits(int const r) {
	std::cout << "setRawBits member function called\n";
	n = r;
}

float	Fixed::toFloat( void ) const {
	return ((float)n / (1 << fractBit));
}

int		Fixed::toInt( void ) const {
	return (n >> fractBit);
}
