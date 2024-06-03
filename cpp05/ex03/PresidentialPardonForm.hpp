#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

	std::string	_target;

	public:

	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	PresidentialPardonForm(const PresidentialPardonForm &other);

	void	execute(Bureaucrat const &executor) const;
	
};
