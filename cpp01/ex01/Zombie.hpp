#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie 
{
private:

	std::string	_name;
	int	index;
	static int	nbZombie;
	static int	random;

public:

	Zombie();
	~Zombie(void);

	int	getNbZombie(void);
	int	getRandom(void);
	std::string	getName(void);

	void	announce(void);
	
	void	setName(std::string name);
	Zombie	*zombieHorde(int N, std::string name);

};

#endif