 #pragma once

#include <string>
#include <iostream>
#include <cmath>
// #include "Array.tpp"

template <typename T>
class Array 
{
	private:
	T *_elements;
	unsigned int _size;

	public:
    Array()
	{
		_elements = NULL;
		_size = 0;
	}
	Array(unsigned int n)
	{
		_elements = new T[n];
		_size = n;
	}
    ~Array()
	{
		delete[] _elements;
	}
    Array(const Array& other)
	{
		_size = other._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < other._size; i++)
			_elements[i] = other._elements[i];
	}
    Array& operator=(const Array& other)
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
	T &operator[](int index)
	{
		if (index < 0 || index >= static_cast<int>(_size))
			throw OutOfBounds();
		return _elements[index];
	}

	class OutOfBounds : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "OutOfBounds";
			}
		
	};

	unsigned int size()
	{
		return _size;
	}
};