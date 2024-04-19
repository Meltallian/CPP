#include "HumanA.hpp"

	void	HumanA::setName(std::string	name)
	{
		_name = name;
	}

	std::string	HumanA::getName()
	{
		return (_name);
	}
	// void	HumanA::setWeapon(Weapon weapon)
	// {
	// 	_weapon = weapon;
	// }

	void	HumanA::attack()
	{
		std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
	}

	HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
	{
		setName(name);
	};

