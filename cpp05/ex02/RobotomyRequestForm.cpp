#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
	AForm("Robotomy", 72, 45)
	, _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : 
	AForm("Robotomy", 72, 45)
{
	*this = other;
}

//the randomisation is done based on system entropy and doesnt need re-compilation
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSigned())
	{
		if (executor.getGrade() <= getReqGradeToExecute())
		{
			srand(time(NULL));
			int random = rand() % 2;
			std::cout << "*rrzssgrrsssszzzz!!!* " << std::endl;
			if (random == 0)
				std::cout << _target << " has been robotomized successfully." << std::endl;
			else
				std::cout << "The robotomy failed, but " << _target << " survived." << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::NotSigned();
}
