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

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

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

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << f.getName() << ", signed state : " << f.getSigned()
		<< ", grade required to sign : " << f.getReqGradeToSign()
		<< ", grade required to execute : " << f.getReqGradeToExecute()
		<< "." << std::endl;
	return out;
}