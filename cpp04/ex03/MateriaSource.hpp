#pragma once

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	AMateria *_materia[4];

	public:

	MateriaSource();
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);
	MateriaSource(const MateriaSource &other);

	void learnMateria(AMateria *m);
	AMateria	*createMateria(std::string const &type);
};