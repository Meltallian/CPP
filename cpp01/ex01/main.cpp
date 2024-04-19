#include "Zombie.hpp"

int	main(void)
{
	size_t	num = 10;
	std::string	name = "Johnny Cash";
	Zombie Zoom;

	Zombie *horde = Zoom.zombieHorde(num, name);

	for(size_t i = 0; i < num; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}