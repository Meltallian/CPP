#pragma once

#include <iostream>
#include <string>
#include <cmath>

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
	Fixed	&operator=(const Fixed &other);

	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);

	float	operator+(const Fixed &other);
	float	operator-(const Fixed &other);	
	float	operator*(const Fixed &other);
	float	operator/(const Fixed &other);

	Fixed	&operator++(); //pre-incr
	Fixed	&operator--();
	Fixed	operator++(int); //post-incr
	Fixed	operator--(int);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &f);