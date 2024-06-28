// #include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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
		std::cout << "Using pointer: A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Using pointer: B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Using pointer: C" << std::endl;
	else
		std::cout << "Not A, B nor C" << std::endl;
}


//When a dynamic cast is used on a reference, it throws a
//bad_cast exception. here it's silent as else it woould flood
//the stdout with error everytime since there is usually one correct or none
//the casting cannot return a nullptr since there's no pointers.
void	identify(Base &p)
{
	Base tmp;

	try {
		tmp =  dynamic_cast<A&>(p);
		std::cout << "Using reference: A" << std::endl;
	}
	catch (std::exception &e) {
		// std::cout << "error: couldn't cast into A" << std::endl;
	}
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "Using reference: B" << std::endl;
	}
	catch (std::exception &e) {
		// std::cout << "error: couldn't cast into B" << std::endl;
	}
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "Using reference: C" << std::endl;
	}
	catch (std::exception &e) {
		// std::cout << "error: couldn't cast into C" << std::endl;
	}
}

int main()
{
	Base *n = generate();
	identify(n);

	//dereferencing and therefore can be used for reference function
	identify(*n);
	return 0;

}