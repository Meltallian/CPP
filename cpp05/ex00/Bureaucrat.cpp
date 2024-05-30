#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < HIGHEST)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
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

std::ostream &operator<<(std::ostream & o, Bureaucrat const &f) 
{
    o << f.getName() << ", bureaucrat grade " << f.getGrade() << ".";
    return o;
}