#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << name << " has been constructed." << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << _name << " was destroyed." << std::endl;
};

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHP();
		this->_energyPoints = other.getEP();
		this->_attackDamage = other.getAD();
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

std::string	ClapTrap::getName() const
{
	return _name;
}

int	ClapTrap::getHP() const
{
	return _hitPoints;
}

int	ClapTrap::getEP() const
{
	return _energyPoints;
}

int	ClapTrap::getAD() const
{
	return _attackDamage;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
		std::cout << _name << " is out of energy and can't attack!" << std::endl;
	else 
	{
		_energyPoints -= 1;
		std::cout << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " got damaged for " << amount << std::endl;
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
	{
		_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << _name << " is out of energy and can't repair!" << std::endl;
	else 
	{
		_energyPoints -= 1;
		std::cout << _name << " gets healed by " << amount << std::endl;
		_hitPoints += amount;
	}
}