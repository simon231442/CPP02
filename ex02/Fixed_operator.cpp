#include "Fixed.hpp"

bool	Fixed::operator>(Fixed const& b) const
{
	if (this->fixedPointValue_ > b.fixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const& b) const
{
	if (this->fixedPointValue_ < b.fixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const& b) const
{
	if (this->fixedPointValue_ >= b.fixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const& b) const
{
	if (this->fixedPointValue_ <= b.fixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const& b) const
{
	if (this->fixedPointValue_ == b.fixedPointValue_)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const& b) const
{
	if (this->fixedPointValue_ != b.fixedPointValue_)
		return true;
	return false;
}

Fixed		Fixed::operator+(Fixed const& b) const
{
	Fixed result;
	result.setRawBits(this->fixedPointValue_ + b.fixedPointValue_);
	return result;
}

Fixed		Fixed::operator-(Fixed const& b) const
{
	Fixed result;
	result.setRawBits(this->fixedPointValue_ - b.fixedPointValue_);
	return result;
}

Fixed		Fixed::operator*(Fixed const& b) const
{
	long	fixedPointValue_tmp = (long)this->fixedPointValue_ * b.fixedPointValue_;
	Fixed	Fixed_tmp;

	Fixed_tmp.setRawBits((int)(fixedPointValue_tmp >> this->fractionnalBits_));

	return Fixed_tmp;
}

Fixed		Fixed::operator/(Fixed const& b) const
{
	long	fixedPointValue_tmp = ((long)this->fixedPointValue_ << this->fractionnalBits_) / b.fixedPointValue_;
	Fixed	Fixed_tmp;

	Fixed_tmp.setRawBits((int)fixedPointValue_tmp);

	return Fixed_tmp;
}

Fixed		Fixed::operator++(void)
{
	this->fixedPointValue_++;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixedPointValue_++;
	return tmp;
}

Fixed		Fixed::operator--(void)
{
	this->fixedPointValue_--;
	return *this;
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixedPointValue_--;
	return tmp;
}





