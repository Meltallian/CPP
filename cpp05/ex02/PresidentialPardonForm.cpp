#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	AForm("Zaphod Beeblebrox", 25, 5)
	, _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
