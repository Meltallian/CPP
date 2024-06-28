#include "Serialization.hpp"

int main()
{
	Data *swag = new Data;
	swag->d = 20.5;
	swag->i = 10;
	swag->f = 42.8f;
	uintptr_t uptr =  Serialization::serialize(swag);
	std::cout <<  uptr << std::endl;

	Data *back = Serialization::deserialize(uptr);
	std::cout <<  back->i << std::endl;
	std::cout <<  back->d << std::endl;
	std::cout <<  back->f << std::endl;
	delete swag;
	return 0;
}