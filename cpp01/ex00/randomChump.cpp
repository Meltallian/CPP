#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie randomZombie(name);
	randomZombie.announce();
}