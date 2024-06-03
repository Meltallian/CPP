#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < HIGHEST)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
    if (other._grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (other._grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->_grade = other._grade;
    return *this;	
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) 
{
    *this = other;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade() 
{
    this->_grade--;
    if (this->_grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() 
{
    this->_grade++;
    if (this->_grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "TooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "TooLowException";
}

const char *Bureaucrat::NotSigned::what() const throw()
{
	return "UnsignedForm";
}

void	Bureaucrat::signForm(AForm &f)
{
	if (f.getSigned())
		std::cout << _name << " signed " << f.getName() << "." << std::endl;
	else
		std::cout << _name << " couldn't sign " << f.getName() 
			<< " because he's just plain stoupid." << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.getSigned())
	{
		if (_grade <= form.getReqGradeToExecute())
		{
			std::cout << _name << " executed " << form.getName() << "." << std::endl;
		}
		else
			throw Bureaucrat::GradeTooLowException();
	}
	else
		throw Bureaucrat::NotSigned();
}

std::ostream &operator<<(std::ostream & o, const Bureaucrat &f) 
{
    o << f.getName() << ", bureaucrat grade " << f.getGrade() << ".";
    return o;
}