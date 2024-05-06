#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria 
{
	protected:

	std::string	_type;

	public:

	AMateria(std::string const &type);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &other);
	AMateria(const AMateria &other);

	std::string const	&getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

};