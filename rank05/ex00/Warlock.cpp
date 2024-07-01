#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << "<" << _name << ">: This looks like another boring day." << std::endl;
}

Warlock::~Warlock() 
{
	std::cout << "<" << _name << ">: My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& other) 
{
	*this = other;
}

Warlock& Warlock::operator=(const Warlock& other)
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}

const std::string	&Warlock::getName() const
{
	return _name;	
}

const std::string	&Warlock::getTitle() const
{
	return _title;
}

void	Warlock::setTitle(const std::string &title)
{
	_title = title;
}
