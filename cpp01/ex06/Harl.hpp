#pragma once

#include <iostream>
#include <string>

enum	Command 
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	ELSE
};

class Harl
{
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	_else(void);

	public:

	Harl(){};
	~Harl(){};
	void	complain(std::string level);
	Command	getCommand(const std::string &level);
};