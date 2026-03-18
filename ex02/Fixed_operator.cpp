#include "Fixed.hpp"

bool	Fixed::operator>(Fixed const& b) const
{
	if (this->FixedPointValue_ > b.FixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const& b) const
{
	if (this->FixedPointValue_ < b.FixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const& b) const
{
	if (this->FixedPointValue_ >= b.FixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const& b) const
{
	if (this->FixedPointValue_ <= b.FixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const& b) const
{
	if (this->FixedPointValue_ == b.FixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const& b) const
{
	if (this->FixedPointValue_ != b.FixedPointValue_)
		return true;
	return false;
}

Fixed		Fixed::operator+(Fixed const& b) const
{
	return Fixed(this->FixedPointValue + b.FixedPointValue);
}

Fixed		Fixed::operator-(Fixed const& b) const
{
	return Fixed(this->FixedPointValue - b.FixedPointValue);
}

Fixed		Fixed::operator*(Fixed const& b) const
{
	return Fixed(this->FixedPointValue * b.FixedPointValue);
}

Fixed		Fixed::operator/(Fixed const& b) const
{
	return Fixed(this->FixedPointValue / b.FixedPointValue);
}

Fixed		Fixed::operator++(void)
{
	this->FixedPointValue_++;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->FixedPointValue_++;
	return tmp;
}

Fixed		Fixed::operator--(void)
{
	this->FixedPointValue_--;
	return *this;
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->FixedPointValue_--;
	return tmp;
}





