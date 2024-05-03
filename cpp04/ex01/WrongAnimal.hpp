#pragma once

#include <iostream>
#include <string>

// #include "WrongCat.hpp"

class WrongAnimal
{
	private:

	protected: //similar to private but can be 
	//accessed in derived classes.

	std::string _type;

	public:

	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);
	WrongAnimal(const WrongAnimal &other);

	void	setType(std::string type);
	std::string	getType() const;
	
	virtual void	makeSound() const;

};