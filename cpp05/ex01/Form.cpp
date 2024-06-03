#include "Form.hpp"

Form::Form(std::string name, const int reqGradeToSign, const int reqGradeToExecute) : 
	_name(name), _signed(false), _reqGradeToSign(reqGradeToSign), _reqGradeToExecute(reqGradeToExecute)
{
	if (reqGradeToSign > LOWEST)
		throw Form::GradeTooLowException();
	if (reqGradeToSign < HIGHEST)
		throw Form::GradeTooHighException();
	if (reqGradeToExecute > LOWEST)
		throw Form::GradeTooLowException();
	if (reqGradeToExecute < HIGHEST)
		throw Form::GradeTooHighException();
}

Form::~Form()
{}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_signed = other._signed;
	}
	return *this;
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed),
	_reqGradeToSign(other._reqGradeToSign), _reqGradeToExecute(other._reqGradeToExecute)
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "TooHighException";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "TooLowException";
}

std::string	Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getReqGradeToSign() const
{
	return _reqGradeToSign;
}

int Form::getReqGradeToExecute() const
{
	return _reqGradeToExecute;
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _reqGradeToSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", signed state : " << form.getSigned()
		<< ", grade required to sign : " << form.getReqGradeToSign()
		<< ", grade required to execute : " << form.getReqGradeToExecute()
		<< ".";
	return out; 
}
