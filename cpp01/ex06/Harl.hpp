#pragma once

#include <iostream>
#include <string>

enum	Command 
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl(){};
	~Harl(){};
	void	complain(std::string level);
	Command	getCommand(const std::string &level);
};