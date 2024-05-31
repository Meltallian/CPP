#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

#define	HIGHEST 1
#define	LOWEST 150

class PresidentialPardonForm : public AForm
{
	private:

	const std::string	_name;
	bool				_signed;
	const int			_reqGradeToSign;
	const int			_reqGradeToExecute;
	const std::string	_target;

	public:

	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	// Form &operator=(const Form &other);
	// Form(const Form &other);

	void	execute(Bureaucrat const &executor) const;
	
};
