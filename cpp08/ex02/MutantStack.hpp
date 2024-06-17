#pragma once

#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <exception>

template <typename T>
struct Iterator 
{
    typedef std::forward_iterator_tag iterator_category;
    typedef std::ptrdiff_t difference_type;
    typedef T value_type;
    typedef value_type* pointer;
    typedef value_type& reference;
};

//When you create a std::stack without specifying the container type, 
//it uses std::deque by default
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// this alias is used afterwards to improve readeability 
	typedef typename std::deque<T>::iterator iterator;

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

	//When you inherit from std::stack, you gain access to its protected members. 
	//The std::stack class has a protected member c, which is the underlying container. 
    iterator begin(void)
	{
		return this->c.begin();
	}
    iterator end(void)
	{
		return this->c.end();
	}

	//this could have been done aswell but without the alias at the beginning
    // typename std::deque<T>::iterator begin()
    // {
    //     return this->c.begin();
    // }

};

