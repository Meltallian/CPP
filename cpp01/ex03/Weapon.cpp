#include "Weapon.hpp"

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