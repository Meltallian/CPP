#include "Point.hpp"

int	main()
{

	// Point	a(10, 20);
	// Point	b(0,0);
	// a=b;
	// std::cout << a.getX() << std::endl;
	// (1) angle a, (2) angle b, (3) angle c, (4) point à verifier.
	if(bsp(Point(12,27), Point(0,50.4), Point(-7.8,12), Point(-5,20)))
	{
		std::cout << "true" << std::endl;
	}
	else
		std::cout << "false" << std::endl;
	return 0;
}