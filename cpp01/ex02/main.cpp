#include <string>
#include <iostream>

int	main(void)
{
	std::string	var1 = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var1;
	std::string &stringREF = var1;

	std::cout << &var1 << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << std::endl;

	std::cout << var1 << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}