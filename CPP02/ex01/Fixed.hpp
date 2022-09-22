/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:31:02 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/22 01:58:49 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int	fixed;
		const static int bit;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed& operator = (const Fixed& var);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif 
