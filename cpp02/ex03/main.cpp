#include "Point.hpp"

int	main()
{
	// (1) angle a, (2) angle b, (3) angle c, (4) point à verifier.
	if(bsp(Point(12,27), Point(0,50.4), Point(-7.8,12), Point(-5,20)))
	{
		std::cout << "true" << std::endl;
	}
	else
		std::cout << "false" << std::endl;
	return 0;
}