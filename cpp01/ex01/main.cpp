#include "Zombie.hpp"

int	main(void)
{
	Zombie Zoom;

	//still have to announce each of them
	Zombie *horde = Zoom.zombieHorde(10, "Swaggers");

	delete[] horde;
	return (0);
}