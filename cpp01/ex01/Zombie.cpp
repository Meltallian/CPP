#include "Zombie.hpp"

int Zombie::nbZombie = 0;
int	Zombie::random = 0;

Zombie::Zombie(std::string initName) : name(initName), index(random)
{
	nbZombie++;
	random++;
};

Zombie::~Zombie(void) 
{
	nbZombie--;
};

int	Zombie::getNbZombie(void)
{
	return (Zombie::nbZombie);
}

int	Zombie::getRandom(void)
{
	return (Zombie::random);
}

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie randomZombie(name);
	randomZombie.announce();
}