#pragma once

#include <iostream>
#include <string>

// #include "Dog.hpp"
// #include "Cat.hpp"

class Animal
{
	private:

	protected: //similar to private but can be 
	//accessed in derived classes.

	std::string _type;

	public:

	Animal();
	virtual ~Animal();
	Animal &operator=(const Animal &other);
	Animal(const Animal &other);

	void	setType(std::string type);
	std::string	getType() const;
	
	virtual void	makeSound() const;

};