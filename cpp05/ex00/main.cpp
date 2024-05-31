#include "Bureaucrat.hpp"
#include <exception>

void handleException(const std::exception &ex) 
{
    std::cerr << "Caught exception: " << ex.what() << std::endl;
}

int	main(void)
{
	int	test = 150;
    Bureaucrat a("John", test); 
    std::cout << a << std::endl;
    try 
	{
		// a.incrementGrade();
		a.decrementGrade();
    } 
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		handleException(ex);
	}
	catch (Bureaucrat::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	// a.incrementGrade();	
    // std::cout << a << std::endl;
	return 0;
}