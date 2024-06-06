#include "Serialization.hpp"

// Serialization::Serialization() 
// {
// }

// Serialization::~Serialization() 
// {
// }

// Serialization::Serialization(const Serialization& other) 
// {
// }

// Serialization& Serialization::operator=(const Serialization& other) 
// {
//     if (this != &other)
// 	{

// 	}	
//     return *this;
// }

uintptr_t Serialization::serialize(Data *ptr)
{
	uintptr_t uptr = reinterpret_cast<uintptr_t>(ptr);
	return uptr;
}

Data *Serialization::deserialize(uintptr_t raw)
{
	Data *dataptr = reinterpret_cast<Data *>(raw);
	return dataptr;
}