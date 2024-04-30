#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:

	std::string	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

	public:

	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &other);
	ClapTrap(const ClapTrap &other);

	std::string getName() const;
	unsigned int			getHP() const;
	unsigned int			getEP() const;
	unsigned int			getAD() const;
	void	setName(std::string name);
	void	setHP(unsigned int hitPoints);
	void	setEP(unsigned int energyPoints);
	void	setAD(unsigned int attackDamage);

	virtual void	attack(const std::string &target);
	// Virtual Functions: Declaring the function as virtual in the base class
	// is essential for polymorphism. This setup allows the most
	// derived class's function to be called, even when the
	// function call goes through a base class pointer or reference.
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);


};
