#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
	private:

	std::string _name;
	AMateria *_materia[4];

	public:

	Character(std::string name);
	~Character();
	Character &operator=(const Character &other);
	Character(const Character &other);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	void	printAddress();
};