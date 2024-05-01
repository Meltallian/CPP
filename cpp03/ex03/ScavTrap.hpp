#pragma once

#include "ClapTrap.hpp"

//Virtual inheritance ensures that ClapTrap is only included once 
//in the inheritance hierarchy when it is otherwise inherited 
//multiple times through different paths.

class ScavTrap : virtual public ClapTrap
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

	void	attack(const std::string &target);
	// void	takeDamage(unsigned int amount);
	// void	beRepaired(unsigned int amount);
};
