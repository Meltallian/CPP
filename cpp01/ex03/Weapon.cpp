#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(){};

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	&Weapon::getType()
{
	// specifying next line isn't necessary
	// const std::string &refType = type;
	return (_type);
}