#include "Fixed.hpp"

int main( void ) {
	
	// Fixed 			a;
	// Fixed const 	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	
	// std::cout << Fixed::max( a, b ) << std::endl;
	Fixed	a(6), b(5);
	Fixed c;
	c = a + a;
	std::cout << c << std::endl;	
		// std::cout << a - a << std::endl;	
		// 	std::cout << c << std::endl;	
				// std::cout << a / a << std::endl;	
	return 0;
}