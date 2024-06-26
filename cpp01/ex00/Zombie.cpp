#include "Zombie.hpp"

// int Zombie::nbZombie = 0;
// int	Zombie::random = 0;

Zombie::Zombie(std::string initName) : name(initName)
{
	// nbZombie++;
	// random++;
};

Zombie::~Zombie(void) 
{
	std::cout << name << "'s brain exploded." << std::endl;
	// nbZombie--;
};

// int	Zombie::getNbZombie(void)
// {
// 	return (Zombie::nbZombie);
// }

// int	Zombie::getRandom(void)
// {
// 	return (Zombie::random);
// }

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}