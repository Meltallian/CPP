#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHP(100);
	setEP(50);
	setAD(20);
};

ScavTrap::~ScavTrap() {};

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		setName(other.getName());
		setHP(other.getHP());
		setEP(other.getEP());
		setAD(other.getAD());
	}
	return *this;
};

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;	
};

bool	ScavTrap::getGuardMode()
{
	return (_guardMode);
}

void	ScavTrap::setGuardMode(bool activate)
{
	_guardMode = activate;
}

void	ScavTrap::guardGate()
{
	setGuardMode(true);
	std::cout << "[ScavTrap] " << getName() << " is now in Gate keeper mode." << std::endl;
}
