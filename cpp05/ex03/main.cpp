#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void handleException(const std::exception &ex) 
{
    std::cerr << "Caught exception: " << ex.what() << std::endl;
}

//the idea is to have a Bureaucraft high level enough to be USED by a 
//form to beSigned. Once done you want another Bureaucrat high enough 
//level to be USED by a form to be executed.

int	main(void)
{
	int	grade = 2;

	Intern intern;
	AForm *rrf;
	rrf = intern.makeForm("RobotomyRequestForm", "the evaluator");
	try 
	{
		Bureaucrat	b("Bonobo", grade);
		rrf->beSigned(b);
		rrf->execute(b);
	}
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		handleException(ex);
	}
	catch (Bureaucrat::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	catch (AForm::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	catch (AForm::GradeTooLowException &ex) 
	{
       handleException(ex);
    }
	catch (AForm::NotSigned &ex)
	{
		handleException(ex);
	}
	delete rrf;
	return 0;
}