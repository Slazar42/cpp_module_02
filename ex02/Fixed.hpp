/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:55:06 by slazar            #+#    #+#             */
/*   Updated: 2023/10/29 05:08:07 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<cmath>
#include<iostream>

class Fixed{
	private:
		int					n;
		static const int	fractBit = 8;
	public:
		Fixed(void);
		Fixed(const int n_int);
		Fixed(const float f_float);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed&	operator= (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const r);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		friend	std::ostream & operator<<(std::ostream & o, Fixed const & fixed);
};

#endif