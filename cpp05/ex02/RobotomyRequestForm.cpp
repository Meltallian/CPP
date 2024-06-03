#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
	AForm("Robotomy", 72, 45)
	, _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

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
