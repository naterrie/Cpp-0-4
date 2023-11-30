/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:02:20 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/30 12:39:27 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const & ctr)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = ctr.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_value++;
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_value--;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

bool	Fixed::operator>(Fixed const &other)
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(Fixed const &other)
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(Fixed const &other)
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(Fixed const &other)
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(Fixed const &other)
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(Fixed const &other)
{
	return (this->toFloat() != other.toFloat());
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
