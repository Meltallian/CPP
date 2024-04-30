#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

	std::string	_name;

	public:

	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &other);
	DiamondTrap(const DiamondTrap &other);

	


};