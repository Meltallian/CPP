#pragma once

#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	

	public:
    MutantStack<T>() : std::stack<T>() {}
    ~MutantStack<T>() {}
    MutantStack<T>(const MutantStack& other) : std::stack<T>()
	{
		*this = other;
	}
    MutantStack<T>& operator=(const MutantStack& other) 
	{
		if (this != &other)
		{
			*this = other;
		}
		return *this;
	}

    // typedef typename std::stack<int>::container_type::iterator iterator;
    // iterator begin(void);
    // iterator end(void);

};

