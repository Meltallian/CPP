#include "Zombie.hpp"

int main(void)
{
	Zombie	*Z1 = new Zombie("Fred");

	Z1->announce();

	Zombie *Z2 = Z1->newZombie("Jack");
	Z2->announce();

	Z1->randomChump("Alcapone");
	
	delete Z1;
	delete Z2;
	return (0);
}