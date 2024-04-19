#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:

	Weapon	*_weapon;
	std::string	_name;

	public:

	HumanB(std::string name);
	~HumanB() {};
	void	setName(std::string	name);
	std::string	getName();

	void	setWeapon(Weapon &weapon);

	// Weapon	getWeapon();

	void	attack();

};