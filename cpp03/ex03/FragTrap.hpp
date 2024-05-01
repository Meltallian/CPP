#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:


	public:

	FragTrap(std::string name);
	~FragTrap();
	FragTrap &operator=(const FragTrap &other);
	FragTrap(const FragTrap &other);

	void	highFivesGuys(void);
	void	attack(const std::string &target);
	// void	takeDamage(unsigned int amount);
	// void	beRepaired(unsigned int amount);
};
