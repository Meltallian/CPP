#include "Harl.hpp"

Harl::Harl()
{
	tab[0].level = "DEBUG";
	tab[0].f = &Harl::debug;
	tab[1].level = "INFO";
	tab[1].f = &Harl::info;
	tab[2].level = "WARNING";
	tab[2].f = &Harl::warning;
	tab[3].level = "ERROR";
	tab[3].f = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	static int	i = -1;
	if (i <= 3) 
	{
		++i;
		if (level == tab[i].level) //(this->*lut[i].f)() calls the member function pointed to by lut[i].f on the object pointed to by this.
			(this->*tab[i].f)();
		else
			complain(level);
	}
	i = -1;
}