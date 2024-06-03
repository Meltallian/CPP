#include "AForm.hpp"

AForm::AForm(std::string name, const int sign, const int execute) : 
_name(name), _signed(false), _reqGradeToSign(sign), _reqGradeToExecute(execute)
{
	if (sign > LOWEST)
		throw AForm::GradeTooLowException();
	if (sign < HIGHEST)
		throw AForm::GradeTooHighException();
	if (execute > LOWEST)
		throw AForm::GradeTooLowException();
	if (execute < HIGHEST)
		throw AForm::GradeTooHighException();
}

AForm::~AForm()
{}

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "TooHighException";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "TooLowException";
}

const char *AForm::NotSigned::what() const throw()
{
	return "UnsignedForm";
}

std::string	AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getReqGradeToSign() const
{
	return _reqGradeToSign;
}

int AForm::getReqGradeToExecute() const
{
	return _reqGradeToExecute;
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _reqGradeToSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << f.getName() << ", signed state : " << f.getSigned()
		<< ", grade required to sign : " << f.getReqGradeToSign()
		<< ", grade required to execute : " << f.getReqGradeToExecute()
		<< ".";
	return out;
}