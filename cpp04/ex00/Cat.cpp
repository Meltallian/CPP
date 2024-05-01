#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "[Cat] was constructed." << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] was detroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Cat::Cat(const Cat &other) : Animal()
{
	*this = other;
}

void	Cat::makeSound() const
{
	std::cout << "[Cat] \"I hate everyone, just give me food already.\"" << std::endl;
}
