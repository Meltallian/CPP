 #pragma once

#include <string>
#include <iostream>
#include <cmath>

template <typename T>
class Array 
{
	private:
	T *_elements;
	unsigned int _size;

	public:
    Array();
	Array(unsigned int n);
    ~Array();
    Array(const Array& other);
    Array& operator=(const Array& other);

	class OutOfBounds : public std::exception
	{
		public:
			const char *what() const throw();
	};

	unsigned int size();
};