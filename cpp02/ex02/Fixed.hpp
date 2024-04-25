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

	static Fixed		&min(Fixed &first, Fixed &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);