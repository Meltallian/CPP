#include "Array.hpp"

Array::Array()
{
	_elements = NULL;
	_size = 0;
}

Array::Array(unsigned int n)
{
	_elements = new T[n];
	_size = n;
}

Array::~Array() 
{
	delete[] _elements;
}

Array::Array(const Array& other) 
{
	_size = other._size;
	_elements = new T[_size];
	for (unsigned int i = 0; i < other._size; i++)
		_elements[i] = other._elements[i];
}

Array& Array::operator=(const Array& other) 
{
    if (this != &other)
	{
		delete[] _elements;
		this->_size = other._size;
		this->_elements = new T[_size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_elements[i] = other._elements[i];
	}
    return *this;
}


const char *Array::what() const throw() 
{
    return "OutOfBounds";
}

unsigned int Array::size()
{
	unsigned int	i;
	while (_elements[i])
		i++;
	return i;
}