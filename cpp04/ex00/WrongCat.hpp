#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

	WrongCat();
	~WrongCat();
	WrongCat &operator=(const WrongCat &other);
	WrongCat(const WrongCat &other);

	// void	setType(std::string type);
	// std::string	getType();
	
	void	makeSound() const;

};