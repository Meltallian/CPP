#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("Shrubbery", 145, 137)
	, _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

//Privates attributes are const. There's no use in copying it.
// Form &Form::operator=(const Form &other){}

//same logic
//Form::Form(const Form &other){}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigned())
	{
		if (executor.getGrade() <= getReqGradeToExecute())
		{
			std::ofstream	file(_target + "_shrubbery");
			int height = 5;
			int width = 2 * height - 1;
			for (int i = 0; i < height; ++i) {
				for (int j = 0; j < width; ++j) {
					if (j >= height - 1 - i && j <= height - 1 + i) {
						file << '*';
					} else {
						file << ' ';
					}
				}
				file << std::endl;
			}
			for (int i = 0; i < 2; ++i) {
				for (int j = 0; j < width; ++j) {
					if (j == height - 1) {
						file << '|';
					} else {
						file << ' ';
					}
				}
				file << std::endl;
			}
			file.close();
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::NotSigned();
}
