#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	bool	_guardMode;

	public:

	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &other);
	ScavTrap(const ScavTrap &other);

	void	guardGate();
	bool	getGuardMode();
	void	setGuardMode(bool activate);
};
