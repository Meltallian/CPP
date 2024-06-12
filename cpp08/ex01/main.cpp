#include "Span.hpp"

int main()
{
	Span a(6);
	a.addNumber(1);
	a.addNumber(255);
	a.addNumber(5);
	a.addNumber(58);
	a.addNumber(3);
	// a.addNumber(9);
	try {
		std::cout << a.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "lol, c fo" << '\n';
	}
    return 0;
}