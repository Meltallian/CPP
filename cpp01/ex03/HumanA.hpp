#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:

	Weapon	&_weapon;
	std::string	_name;
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA() {};
	void	setName(std::string	name);
	std::string	getName();
	// void	setWeapon(Weapon weapon);
	void	attack();

};