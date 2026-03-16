#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = integer;
	this->fixedPointValue << this->fractionnal_;
}

Fixed::Fixed(float const floatPoint);
{
	std::cout << "Float constructor called" << std::endl;
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
	this->fixedPointValue_ = source.getRawBits();

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
