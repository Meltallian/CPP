#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("shrubbery creation", 145, 137)
	, _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : 
	AForm("Shrubbery", 145, 137)
{
	*this = other;
}
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigned())
	{
		if (executor.getGrade() <= getReqGradeToExecute())
		{
			std::string target;
			target = _target + "_shrubbery";
   			std::ofstream file(target.c_str());
    		if (file.is_open()) 
			{
				file << "       _-_\n"
				<< "    /~~   ~~\\\n"
				<< " /~~         ~~\\\n"
				<< "{               }\n"
				<< " \\  _-     -_  /\n"
				<< "   ~  \\\\ //  ~\n"
				<< "_- -   | | _- _\n"
				<< "  _ -  | |   -_\n"
				<< "      // \\\\\n";
        		file.close();
			}
			else
				throw AForm::GradeTooLowException();
		}
	}
	else
		throw AForm::NotSigned();
}
