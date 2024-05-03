#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Metamorphe";
	std::cout << "[WrongAnimal] was constructed." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] was destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] *the sound of Silence*" << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}