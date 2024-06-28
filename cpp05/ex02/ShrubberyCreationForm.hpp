#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class ShrubberyCreationForm : public AForm
{
	private:

	std::string	_target;

	public:

	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);

	void	execute(const Bureaucrat &executor) const;
	
};
