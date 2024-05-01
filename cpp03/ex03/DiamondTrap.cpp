#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name), FragTrap(_name), ScavTrap(_name)
{
	DiamondTrap::setName(_name);
	std::cout << "[DiamondTrap] " << this->_name << " has been constructed." << std::endl;
	this->ClapTrap::setName(_name + "_clap_name"); 
	setHP(100);
	setEP(50);	
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

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	*this = other;	
};

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap] " << _name << " is my name." << std::endl;
	std::cout << "[DiamondTrap] " << ClapTrap::getName() << " is my name." << std::endl;
}

void	DiamondTrap::setName(std::string name)
{
	_name = name;
}

// unsigned int	DiamondTrap::getHP()
// {
// 	return (FragTrap::getHP());
// }

// unsigned int	DiamondTrap::getEP()
// {
// 	return (ScavTrap::getEP());
// }

// unsigned int	DiamondTrap::getAD()
// {
// 	return (FragTrap::getAD());
// }