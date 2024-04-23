#include "Zombie.hpp"

int main(void)
{
	Zombie	*Z1 = new Zombie("Fred");
	Zombie	*Z2 = newZombie("Jack");
	Zombie	Z3("Schlag");

	Z1->announce();
	Z2->announce();
	Z3.announce();

	randomChump("Alcapone");
	
	delete Z1;
	delete Z2;
	return (0);
}