#include "Zombie.hpp"

int main(void)
{
	Zombie	*Z1 = new Zombie("Fred");
	Zombie	*Z2 = Z1->newZombie("Jack");
	Zombie	Z3("Schlag");
	Zombie	*Z4 = Z3.newZombie("Zach");

	Z1->announce();
	Z2->announce();
	Z3.announce();
	Z4->announce();

	Z1->randomChump("Alcapone");
	
	delete Z1;
	delete Z2;
	delete Z4;
	return (0);
}