/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:30:55 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/22 02:01:39 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed = nb << this->bit;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(nb * (1 << this->bit));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator = (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = fixed.fixed;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}

int Fixed::getRawBits() const
{
	return this->fixed;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed / (1 << this->bit));
}

int Fixed::toInt( void ) const
{
	return (this->fixed / (1 << this->bit));
}