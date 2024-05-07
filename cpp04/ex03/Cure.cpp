#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "[Cure] was constructed." << std::endl;
}

Cure::~Cure()
{
	// std::cout << "[Cure] was destroyed." << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	*this = other;
}

std::string const	&Cure::getType() const
{
	return _type;
}

Cure	*Cure::clone() const
{
	Cure *clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}

// void AMateria::use(ICharacter &target)
// {
// 	stdd::cout << "[AMateria] can't be used here" << std::endl;
// }