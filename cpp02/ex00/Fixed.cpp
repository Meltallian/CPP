#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNbValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
	// _fixedPointNbValue = other.getRawBits();
}
	
Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		_fixedPointNbValue = other.getRawBits();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_fixedPointNbValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointNbValue = raw;
}