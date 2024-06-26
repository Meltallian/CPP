#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "[Dog] was constructed." << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] was destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
}

void	Dog::makeSound() const
{
	std::cout << "[Dog] \"I love everyone, how can I improve your life ?\"" << std::endl;
}
