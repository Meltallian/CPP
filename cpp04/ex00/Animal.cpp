#include "Animal.hpp"

Animal::Animal()
{
	_type = "Metamorphe";
	std::cout << "[Animal] was constructed." << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] was destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

void	Animal::makeSound() const
{
	std::cout << "[Animal] *the sound of Silence*" << std::endl;
}

void	Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType() const
{
	return _type;
}