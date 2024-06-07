#include "Base.hpp"

int main()
{
	Base *n = generate();
	identify(n);

	//dereferencing and therefore can be used for reference function
	identify(*n);
	return 0;

}