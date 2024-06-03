#include "Intern.hpp"

Intern::Intern() 
{

}

Intern::~Intern() 
{

}

Intern::Intern(const Intern &other) 
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string available[] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	int	i = 0;

	while (i < 3 && name != available[i])
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates a PresidentialPardonForm" << std::endl;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << "Intern creates a ShrubberyCreationForm" << std::endl;
			return new ShrubberyCreationForm(target);
		case 2:
			std::cout << "Intern creates a RobotomyRequestForm" << std::endl;
			return new RobotomyRequestForm(target);
		default:
			std::cout << "Learn to spell dude" << std::endl;
			return NULL;
	}
}