#pragma once

#include <iostream>
#include <string>

class Harl;

struct s_tab
{
	std::string	level;
	void	(Harl::*f)(void);
};

class Harl
{
	private:

	s_tab	tab[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl();
	~Harl();
	void	complain(std::string level);
	
};