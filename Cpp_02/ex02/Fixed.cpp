/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:08:41 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 23:58:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	_point = value << _nb_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	_point = (int)roundf(value * (1 << _nb_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_point = copy.getRawBits();
	return *this;
}
int Fixed::getRawBits( void ) const
{
	return _point;
}
void Fixed::setRawBits( int const raw )
{
	_point = raw;
}
//-------------------------------------------------------------------

float Fixed::toFloat( void ) const
{
	return ((float)_point / (1 << _nb_bits));
}

int Fixed::toInt( void ) const
{
	return (_point >> _nb_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
//-------------------------------------------------------------------
Fixed &Fixed::operator++(void)
{
	_point++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_point++;
	return tmp;
}
Fixed &Fixed::operator--(void)
{
	_point--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_point--;
	return tmp;
}

Fixed Fixed::operator+(Fixed const &fixed)
{
	return Fixed(toFloat() + fixed.toFloat());
}
Fixed Fixed::operator-(Fixed const &fixed)
{
	Fixed newFixed(toFloat() - fixed.toFloat());
	return newFixed;
}
Fixed Fixed::operator*(Fixed const &fixed)
{
	Fixed newFixed(toFloat() * fixed.toFloat());
	return newFixed;
}
Fixed Fixed::operator/(Fixed const &fixed)
{
	Fixed newFixed(toFloat() / fixed.toFloat());
	return newFixed;
}

bool Fixed::operator>(Fixed const &fixed) const
{
	if (this->_point > fixed._point)
		return true;
	else
		return false;
}
bool Fixed::operator<(Fixed const &fixed) const
{
	if (_point < fixed._point)
		return true;
	else
		return false;
}
bool Fixed::operator>=(Fixed const &fixed) const
{
	return _point >= fixed._point;
}
bool Fixed::operator<=(Fixed const &fixed) const
{
	return _point <= fixed._point;
}
bool Fixed::operator==(Fixed const &fixed) const
{
	return _point == fixed._point;
}
bool Fixed::operator!=(Fixed const &fixed) const
{
	return _point != fixed._point;
}
//-------------------------------------------------------------------
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}