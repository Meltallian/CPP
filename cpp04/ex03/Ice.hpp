#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice();
	~Ice();
	Ice &operator=(const Ice &other);
	Ice(const Ice &other);

	std::string const	&getType() const; //Returns the materia type

	Ice* clone() const;
	void use(ICharacter &target);

};