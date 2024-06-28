#pragma once

#include <iostream>
#include <string>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
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

	void	execute(const Bureaucrat &executor) const;
	
};
