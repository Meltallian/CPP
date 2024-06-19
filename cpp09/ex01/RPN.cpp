#include "RPN.hpp"

RPN::RPN() : std::stack<int>()
{
}

RPN::~RPN() 
{
}

RPN::RPN(const RPN& other) : std::stack<int>()
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other) 
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}
