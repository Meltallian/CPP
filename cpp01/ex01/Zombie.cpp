#include "Zombie.hpp"

// int Zombie::nbZombie = 0;
// int	Zombie::random = 0;

Zombie::Zombie() {}

Zombie::~Zombie(void) 
{
	std::cout << _name << "'s brain exploded. Disgusting.." << std::endl;
};

void	Zombie::setName(std::string newName)
{
	_name = newName;
}

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
	return (_name);
}

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

