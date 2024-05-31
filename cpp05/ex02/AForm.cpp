#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _signed(false), 
	_reqGradeToSign(1), _reqGradeToExecute(1)
{
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
		<< "." << std::endl;
	return out;
}