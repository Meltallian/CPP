#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	AForm("Zaphod Beeblebrox", 25, 5)
	, _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : 
	AForm("Zaphod Beeblebrox", 25, 5)
{
	*this = other;
}


void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getSigned())
	{
		if (executor.getGrade() <= getReqGradeToExecute())
		{
			std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::NotSigned();
}
