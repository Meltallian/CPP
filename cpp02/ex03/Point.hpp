#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point 
{
	private:

	const Fixed _x;
	const Fixed	_y;

	public:

	Point();
	Point(const float num1, const float num2);
	~Point();
	Point(const Point &other);
	Point	&operator=(const Point &other);

	const Fixed getX() const;
	const Fixed getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);