/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kid-bouh <kid-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 02:02:59 by kid-bouh          #+#    #+#             */
/*   Updated: 2022/09/23 17:17:30 by kid-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
	this->fixed = 0;
}

Fixed::Fixed(const int nb)
{
	this->fixed = nb << this->bit;
}

Fixed::Fixed(const float nb)
{
	this->fixed = roundf(nb * (1 << this->bit));
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
	
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixed / (1 << this->bit));
}

int Fixed::toInt( void ) const
{
	return (this->fixed / (1 << this->bit));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->fixed = fixed.fixed;
	return *this;
}

Fixed Fixed::operator*(const Fixed& var)
{
	return (Fixed(this->toFloat() * var.toFloat()));
}

Fixed Fixed::operator/(const Fixed& var)
{
	return (Fixed(this->toFloat() / var.toFloat()));
}

Fixed Fixed::operator-(const Fixed& var)
{
	return (Fixed(this->toFloat() - var.toFloat()));
}

Fixed Fixed::operator+(const Fixed& var)
{
	return (Fixed(this->toFloat() + var.toFloat()));
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed& Fixed::operator++()
{
	this->fixed++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed++;
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->fixed--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed--;
	return tmp;
}

bool Fixed::operator>(const Fixed& var)
{
	return (this->fixed > var.fixed);
}

bool Fixed::operator<(const Fixed& var)
{
	return (this->fixed < var.fixed);
}

bool Fixed::operator>=(const Fixed& var)
{
	return (this->fixed >= var.fixed);
}

bool Fixed::operator<=(const Fixed& var)
{
	return (this->fixed <= var.fixed);
}

bool Fixed::operator==(const Fixed& var)
{
	return (this->fixed == var.fixed);
}

bool Fixed::operator!=(const Fixed& var)
{
	return (this->fixed != var.fixed);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if ((Fixed)a > (Fixed)b)
		return a;
	else 
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if ((Fixed)a < (Fixed)b)
		return a;
	else 
		return b;
}