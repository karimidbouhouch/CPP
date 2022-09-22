/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 02:02:47 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/22 23:08:34 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main( void ) {
	
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(1578);
	Fixed d(145.66666f);
	std::cout << ++c << " - " << d.toInt() << std::endl;

	

	return 0;
}