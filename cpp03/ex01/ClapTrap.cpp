#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] " << name
		 << " has been constructed." << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] "<< _name << " was destroyed." << std::endl;
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

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHP(unsigned int hitPoints)
{
	_hitPoints = hitPoints;
}

void	ClapTrap::setEP(unsigned int energyPoints)
{
	_energyPoints = energyPoints;
}

void	ClapTrap::setAD(unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
		std::cout << "[ClapTrap] " << _name 
			<< " is out of energy and can't attack!" << std::endl;
	else 
	{
		_energyPoints -= 1;
		std::cout << "[ClapTrap]" << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] " << _name 
		<< " got damaged for " << amount << std::endl;
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
		std::cout << "[ClapTrap] " << _name 
			<< " is out of energy and can't repair!" << std::endl;
	else 
	{
		_energyPoints -= 1;
		std::cout << "[ClapTrap] " << _name 
			<< " gets healed by " << amount << std::endl;
		_hitPoints += amount;
	}
}
