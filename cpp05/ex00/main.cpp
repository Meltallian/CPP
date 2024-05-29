#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("john", 10);
	std::cout << a.getGrade() << std::endl;
	return 0;
}