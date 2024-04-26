#include "ClapTrap.cpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {};

ClapTrap::~ClapTrap(){};

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHP();
		this->energyPoints = other.getEP();
		this->attackDamage = other.getAD();
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

std::string	ClapTrap::getName()
{
	return _name;
}

int	ClapTrap::getHP()
{
	return _hitPoints;
}

int	ClapTrap::getEP()
{
	return _energyPoints;
}

int	ClapTrap::getAD()
{
	return _attackDamage;
}