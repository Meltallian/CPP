#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain *_brain;

	public:

	Dog();
	~Dog();
	Dog &operator=(const Dog &other);
	Dog(const Dog &other);

	// void	setType(std::string type);
	// std::string	getType();
	
	void	makeSound() const;

};