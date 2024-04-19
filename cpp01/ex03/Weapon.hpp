#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>
#include <string>

class Weapon
{
	private:

	std::string	_type;

	public:

	Weapon(std::string type)
	{
		setType(type);
	}
	~Weapon(){};
	void	setType(std::string type);
	const std::string	&getType();

};

#endif