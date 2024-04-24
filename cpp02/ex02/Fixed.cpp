#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNbValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(integer << _nbFractionalbits);
};

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	//1 << _nbFractionalbits equivaut à 256. (1*2^8)
	//static_cast<int> instead of (int) is safer, clearer, overall best practice
	setRawBits(static_cast<int>(std::roundf(number * (1 << _nbFractionalbits))));
};

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
	//  _fixedPointNbValue = other.getRawBits();
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

bool	Fixed::operator>(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue > other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

bool	Fixed::operator<(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue < other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

bool	Fixed::operator>=(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue >= other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

bool	Fixed::operator<=(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue <= other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

bool	Fixed::operator==(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue == other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

bool	Fixed::operator!=(const Fixed &other)
{
	if (this != &other) //Check for self-assignment -> avoid a = a issues
	{
		if (_fixedPointNbValue != other.getRawBits())
			return true;
		else
			return false;
	}
	else
		return false;
}

int	Fixed::operator+(const Fixed &other)
{
	return this->_fixedPointNbValue + other.getRawBits();
}

int	Fixed::operator-(const Fixed &other)
{
	return this->_fixedPointNbValue - other.getRawBits();
}

int	Fixed::operator*(const Fixed &other)
{
// Intermediate result might need to be handled with a larger type if overflow is a concern	
	int	result = (_fixedPointNbValue * other.getRawBits()) >> _nbFractionalbits;
// Right shift to adjust the scale
    return result;
}

int	Fixed::operator/(const Fixed &other)
{
	if (other.getRawBits() == 0)
	{
		std::cout << "Error: division by zero. Result will be wrong." << std::endl;
		return (0);
	}
	int	result = (this->_fixedPointNbValue << _nbFractionalbits) / other.getRawBits();
	return (result);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return(_fixedPointNbValue);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_fixedPointNbValue = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(std::roundf(_fixedPointNbValue) / (1 << _nbFractionalbits));
}

int	Fixed::toInt(void) const
{
	return (_fixedPointNbValue >> _nbFractionalbits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}