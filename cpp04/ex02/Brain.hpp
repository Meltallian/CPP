#pragma once

#include <iostream>
#include <string>

class Brain
{
	protected:

	std::string	_ideas[100];

	public:

	Brain();
	~Brain();
	Brain &operator=(const Brain &other);
	Brain(const Brain &other);

	std::string *getIdeas();
	
};