#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

};

Point::Point(const float num1, const float num2) : _x(num1), _y(num2)
{

};

Point::~Point()
{

};

Point::Point(const Point &other)
{
	*this = other;
};

//GPT aime pas du tout ca et conseille plutot de delete entierement
//le assignment operator vu que c'est con de vouloir copier
//des attriuts qui sont constants. sous-entend la modif d'une constance.
Point	&Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed)this->_x = other.getX();
		(Fixed)this->_y = other.getY();
	}
	return *this;
};

const Fixed Point::getX() const
{
	return (_x);
}
const Fixed Point::getY() const
{
	return (_y);
}