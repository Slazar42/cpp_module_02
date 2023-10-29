/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:55:06 by slazar            #+#    #+#             */
/*   Updated: 2023/10/29 03:50:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
	private:
		int					n;
		static const int	fractBit = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed();

		Fixed & operator= (const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const r);
};

#endif