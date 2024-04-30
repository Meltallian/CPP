#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[DiamondTrap] " << getName() << " has been constructed." << std::endl;
	setName(name + getName());
	setHP(100);
	setEP(100);
	setAD(30);	
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] "<< getName() << " was destroyed." << std::endl;	
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
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

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
	*this = other;	
};

