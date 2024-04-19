#include "HumanB.hpp"

	void	HumanB::setName(std::string	name)
	{
		_name = name;
	}

	std::string	HumanB::getName()
	{
		return (_name);
	}

	// Weapon	HumanB::getWeapon()
	// {
	// 	return (*_weapon);
	// }

	void	HumanB::setWeapon(Weapon &weapon)
	{
		_weapon = &weapon;
	}

	void	HumanB::attack()
	{
		if (_weapon)
			std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
		else
			std::cout << getName() << "has no weapon to attack with." << std::endl;
	}

	HumanB::HumanB(std::string name) : _weapon(NULL)
	{
		setName(name);
	};

