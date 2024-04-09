#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char **av)
{
	std::string	*arrayofstr;

	arrayofstr = new std::string[ac - 1];
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			arrayofstr[i-1] = av[i];
			for (size_t j = 0; j < arrayofstr[i - 1].size(); j++)
			{
				if (islower(arrayofstr[i - 1][j]))
					arrayofstr[i - 1][j] = std::toupper(arrayofstr[i - 1][j]);
			}
			std::cout << arrayofstr[i - 1];
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	delete[] arrayofstr;
	return (0);
}