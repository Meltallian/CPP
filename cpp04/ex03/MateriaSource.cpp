#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
	}
	// std::cout << "[MateriaSource] was constructed." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}	
	// std::cout << "[MateriaSource] was destroyed." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
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

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = NULL;
		if (other._materia[i] && other._materia[i]->getType() == "cure")
			_materia[i] =  new Cure();
		if (other._materia[i] && other._materia[i]->getType() == "ice")
			_materia[i] = new Ice();
	}		
	// std::cout << "[MateriaSource] was constructed." << std::endl;	
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure")
	{
		AMateria *m = new Cure();
		return m;
	}
	else if (type == "ice")
	{
		AMateria *m = new Ice();
		return m;
	}
	else
	{
		return 0;
	}
}