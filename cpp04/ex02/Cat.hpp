#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain *_brain;

	public:

	Cat();
	~Cat();
	Cat &operator=(const Cat &other);
	Cat(const Cat &other);

	// void	setType(std::string type);
	// std::string	getType();
	
	void	makeSound() const;

};