#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		return 1;
	}
	(void)ac;
	std::string s = av[1];
	ScalarConverter::convert(s);
	return 0;
}