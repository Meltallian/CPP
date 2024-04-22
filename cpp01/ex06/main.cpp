#include "Harl.hpp"

int	main()
{
	std::string	line;
	Harl	harl;
	std::cout << "Hi dude, I am harl and I'm here for.. what ?" << std::endl;
	while (!std::cin.eof())
	{
		std::getline(std::cin, line);
		if (line == "EXIT")
		{
			std::cout << "Fine.. am out." << std::endl;
			exit(0);
		}
		else if (line == "DEBUG" | line == "INFO" | line == "WARNING" | line == "ERROR")
			harl.complain(line);
		else
			std::cout << "Oh yes, I remember. Ask me about DEBUG, INFO, WARNING or ERROR info." << std::endl;
	}
	return (0);
}