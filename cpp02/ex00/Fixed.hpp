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
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};