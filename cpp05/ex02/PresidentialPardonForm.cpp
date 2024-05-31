#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm(),
	_name("Zaphod Beeblebrox"), _signed(false), _reqGradeToSign(25), _reqGradeToExecute(5),
	_target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{}

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= _reqGradeToExecute)
	{
		std::cout << _target << " has been pardoned by " << _name << "." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}