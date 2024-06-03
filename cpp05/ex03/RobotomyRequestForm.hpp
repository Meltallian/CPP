#pragma once

#include <iostream>
#include <string>
#include <random>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

	std::string	_target;

	public:

	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	RobotomyRequestForm(const RobotomyRequestForm &other);

	void	execute(Bureaucrat const &executor) const;
	
};
