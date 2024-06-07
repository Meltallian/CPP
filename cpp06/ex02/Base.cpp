#include "Base.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;

	if (random == 0)
	{
		Base *p = new A();
		return p;
	}
	else if (random == 1)
	{
		Base *p = new B();
		return p;
	}
	else
	{
		Base *p = new C();
		return p;
	}
	return NULL;
}


//when dynamic cast is used on a pointer, it returns NULL.
void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Not A, B nor C" << std::endl;
}


//When a dynamic cast is used on a reference, it throws a
//bad_cast exception. here it's a silent catching since we are
//not allowed to use the header <typeinfo> needed for the bas_cast
//exception.
void	identify(Base &p)
{
	Base tmp;

	try {
		tmp =  dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (std::exception &e) {
	}
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (std::exception &e) {
	}
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
	}
	catch (std::exception &e) {
	}
}