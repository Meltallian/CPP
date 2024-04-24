#pragma once

#include <iostream>
#include <string>

class Fixed
{
	private:

	int					_fixedPointNbValue;
	static const int	_nbFractionalbits = 8;
	

	public:

	Fixed();
	Fixed(const int	integer);
	Fixed(const float number);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);