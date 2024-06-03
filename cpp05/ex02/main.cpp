#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void handleException(const std::exception &ex) 
{
    std::cerr << "Caught exception: " << ex.what() << std::endl;
}

//the Idea is to have a Bureaucraft high level enough to be USED by a 
//form to beSigned. Once done you want another Bureaucrat high enough 
//level to be USED by a form to be executed.

int	main(void)
{
	int	test = 2;
    try 
	{
	    Bureaucrat a("John", test);
		PresidentialPardonForm p("Schlag");
		RobotomyRequestForm	r("Douche");
		ShrubberyCreationForm	s("schrub");
		p.beSigned(a);
		p.execute(a);
		r.beSigned(a);
		r.execute(a);
		s.beSigned(a);
		s.execute(a);
   		// std::cout << a << std::endl;
		// std::cout << s << std::endl;
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
	return 0;
}