#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	public:

	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);
	ClapTrap(const ClapTrap &other);

	std::string getName();
	int			getHP();
	int			getEP();
	int			getAD();

};
