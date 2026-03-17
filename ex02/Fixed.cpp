/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   Fixed.cpp                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: srenaud <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/16 17:56:56 by srenaud        #+#    #+#                */
/*   Updated: 2026/03/17 14:03:49 by srenaud        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue_ = integer;
	this->fixedPointValue_ = this->fixedPointValue_ << this->fractionnalBits_;
}

Fixed::Fixed(float const floatPoint)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue_ =	roundf(floatPoint * (1 << this->fractionnalBits_));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed	&Fixed::operator=(const Fixed& source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
	{
		this->fixedPointValue_ = source.getRawBits();
	}

	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue_;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->fixedPointValue_ / (float)(1 << this->fractionnalBits_);
}

int		Fixed::toInt(void) const
{
	return roundf(this->toFloat());
}

bool	Fixed::operator>(Fixed const& b)
{
	if (
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i)
{
	o << i.toFloat();
	return o;
}
