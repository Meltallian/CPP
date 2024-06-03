#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
	AForm("robotomy request", 72, 45)
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
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> dis(0, 1);
			std::cout << "*rrzssgrrsssszzzz!!!* " << std::endl;
			if (dis(gen) == 1)
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
