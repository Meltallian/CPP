#include "Character.hpp"

Character::Character(std::string name) : ICharacter(), _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
	}
	std::cout << "[Character] " << _name << " was constructed." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}	
	std::cout << "[Character] " << _name << " was destroyed." << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
			if (other._materia[i] && other._materia[i]->getType() == "cure")
				_materia[i] =  new Cure();
			if (other._materia[i] && other._materia[i]->getType() == "ice")
				_materia[i] = new Ice();
		}		
	}
	return *this;
}

Character::Character(const Character &other) : ICharacter()
{
	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
		if (other._materia[i] && other._materia[i]->getType() == "cure")
			_materia[i] =  new Cure();
		if (other._materia[i] && other._materia[i]->getType() == "ice")
			_materia[i] = new Ice();
	}		
	std::cout << "[Character] " << _name << " was constructed." << std::endl;	
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (_materia[idx])
	{
		_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_materia[idx])
		{
			_materia[idx]->use(target);
		}
	}
}

void	Character::printAddress()
{
	std::cout << "Address de Materia :" << _materia[0] << std::endl;
}