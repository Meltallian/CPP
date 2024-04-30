#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "[ScavTrap] " << getName() << " has been constructed." << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
};

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] "<< getName() << " was destroyed." << std::endl;
};

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

void	ScavTrap::attack(const std::string &target)
{
	if (getEP() <= 0)
		std::cout << "[ScavTrap] " << getName() 
			<< " is out of energy and can't attack!" << std::endl;
	else 
	{
		setEP(getEP() - 1);
		std::cout << "[ScavTrap] " << getName() << " attacks " << target << ", causing "
			<< getAD() << " points of damage!" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ScavTrap] " << getName() 
		<< " got damaged for " << amount << std::endl;
	if (amount > getHP())
		setHP(0);
	else
	{
		setHP(getHP() - amount);
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (getEP() <= 0)
		std::cout << "[ScavTrap] " << getName() 
			<< " is out of energy and can't repair!" << std::endl;
	else 
	{
		setEP(getEP() - 1);
		std::cout << "[ScavTrap] " << getName() 
			<< " gets healed by " << amount << std::endl;
		setHP(getHP() + amount);
	}
}