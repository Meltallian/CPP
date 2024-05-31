#include "Bureaucrat.hpp"
#include <exception>

void handleException(const std::exception &ex) 
{
    std::cerr << "Caught exception: " << ex.what() << std::endl;
}

//form has to sign itself first and then
//calling signform just states whether form was signed or not
int	main(void)
{
	int	test = 150;
    try 
	{
	    Bureaucrat a("John", test);
		Form form("Women's rights", 100, 100);
   		std::cout << a << std::endl;
		form.beSigned(a);
		a.signForm(form);
    } 
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		handleException(ex);
	}
	catch (Bureaucrat::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	catch (Form::GradeTooLowException &ex)
	{
		handleException(ex);
	}
	catch (Form::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	return 0;
}