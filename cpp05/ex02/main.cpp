#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

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
		AForm *p = new PresidentialPardonForm("Schlag");
   		std::cout << p->getName() << std::endl;
    } 
	catch (Bureaucrat::GradeTooLowException &ex)
	{
		handleException(ex);
	}
	catch (Bureaucrat::GradeTooHighException &ex) 
	{
       handleException(ex);
    }
	return 0;
}