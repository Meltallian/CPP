#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "[Ice] was constructed." << std::endl;
}

Ice::~Ice()
{
	std::cout << "[Ice] was destroyed." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	*this = other;
}

std::string const	&Ice::getType() const
{
	return _type;
}

Ice	*Ice::clone() const
{
	Ice *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}

// void AMateria::use(ICharacter &target)
// {
// 	stdd::cout << "[AMateria] can't be used here" << std::endl;
// }