#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] was constructed." << std::endl;
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = "Idea number " + std::to_string(i) + ".";
	}
}

Brain::~Brain()
{
	std::cout << "[Brain] was destroyed." << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}		
	}
	return *this;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

std::string *Brain::getIdeas()
{
	return _ideas;
}