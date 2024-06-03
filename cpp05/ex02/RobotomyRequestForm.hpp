#pragma once

#include <iostream>
#include <string>
#include <random>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

	const std::string	_target;

	public:

	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	// Form &operator=(const Form &other);
	// Form(const Form &other);

	void	execute(Bureaucrat const &executor) const;
	
};
