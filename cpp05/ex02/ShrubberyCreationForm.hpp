#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:

	const std::string	_target;

	public:

	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	// Form &operator=(const Form &other);
	// Form(const Form &other);

	void	execute(Bureaucrat const &executor) const;
	
};
