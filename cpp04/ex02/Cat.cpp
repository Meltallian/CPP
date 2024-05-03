#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "[Cat] was constructed." << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "[Cat] was detroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "[Cat] was constructed." <<std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "[Cat] \"I hate everyone, just give me food already.\"" << std::endl;
}
