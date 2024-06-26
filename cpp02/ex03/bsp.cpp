#include "Point.hpp"

//https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
float	sign(Point const &a, Point const &b, Point const &c)
{
	float first = a.getX().toFloat() - c.getX().toFloat();
	float second = b.getY().toFloat() - c.getY().toFloat();
	float third = b.getX().toFloat() - c.getX().toFloat();
	float fourth = a.getY().toFloat() - c.getY().toFloat();
	return (first * second - third * fourth);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}