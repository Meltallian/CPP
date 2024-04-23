#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNbValue(0) {};

Fixed::~Fixed() {};

Fixed::Fixed(const Fixed &other)
{
	_fixedPointNbValue = other._fixedPointNbValue;
}
	
Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other) //Check for self-assignment
	{
		_fixedPointNbValue = other._fixedPointNbValue;
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return(_fixedPointNbValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointNbValue = raw;
}