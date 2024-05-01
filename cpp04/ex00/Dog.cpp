#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "[Dog] was constructed." << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] was detroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Dog::Dog(const Dog &other) : Animal()
{
	*this = other;
}

void	Dog::makeSound()
{
	std::cout << "I love everyone, how can I make your life happier ?" << std::endl;
}
