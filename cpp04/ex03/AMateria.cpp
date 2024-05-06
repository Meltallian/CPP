#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "[AMateria] was constructed." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] was destroyed." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

std::string const	&AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "[AMateria] can't be used here" << std::endl;
}