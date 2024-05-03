#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "[Dog] was constructed." << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "[Dog] was destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	//need to add the delete of the current Brain;
	if (this != &other)
	{
		this->_type = other._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	//	*this = other; is not sufficient because it 
	//doesnt handle dynamic allocation such as Brain *ptr;
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "[Dog] was constructed." <<std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "[Dog] \"I love everyone, how can I improve your life ?\"" << std::endl;
}
