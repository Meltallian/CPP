#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] " << getName() << " has been constructed." << std::endl;
	setHP(100);
	setEP(100);
	setAD(30);	
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] "<< getName() << " was destroyed." << std::endl;	
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		setName(other.getName());
		setHP(other.getHP());
		setEP(other.getEP());
		setAD(other.getAD());
	}
	return *this;	
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] " << "Hey you! High Five?!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (getEP() <= 0)
		std::cout << "[FragTrap] " << getName() 
			<< " is out of energy and can't attack!" << std::endl;
	else 
	{
		setEP(getEP() - 1);
		std::cout << "[FragTrap] " << getName() << " attacks " << target << ", causing "
			<< getAD() << " points of damage!" << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "[FragTrap] " << getName() 
		<< " got damaged for " << amount << std::endl;
	if (amount > getHP())
		setHP(0);
	else
	{
		setHP(getHP() - amount);
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (getEP() <= 0)
		std::cout << "[FragTrap] " << getName() 
			<< " is out of energy and can't repair!" << std::endl;
	else 
	{
		setEP(getEP() - 1);
		std::cout << "[FragTrap] " << getName() 
			<< " gets healed by " << amount << std::endl;
		setHP(getHP() + amount);
	}
}