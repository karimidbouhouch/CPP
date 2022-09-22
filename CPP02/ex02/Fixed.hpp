/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 02:03:07 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/22 23:07:09 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int	fixed;
		const static int bit;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int nb);
		Fixed(const float nb);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator = (const Fixed& var);
		bool operator>(const Fixed& var);
		bool operator>=(const Fixed& var);
		bool operator<(const Fixed& var);
		bool operator<=(const Fixed& var);
		bool operator==(const Fixed& var);
		bool operator!=(const Fixed& var);
		Fixed operator*(const Fixed& var);
		Fixed operator/(const Fixed& var);
		Fixed operator-(const Fixed& var);
		Fixed operator+(const Fixed& var);
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator++();
		Fixed& operator--();
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif
