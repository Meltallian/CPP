#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "[WrongCat] was constructed." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] was detroyed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	*this = other;
}

void	WrongCat::makeSound() const
{
	std::cout << "[WrongCat] \"I love everyone, I'll give you a hug.\"" << std::endl;
}
