#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <exception>

class Span 
{
	private:
	std::vector<int> _int;
	unsigned int	_limit;
	unsigned int	_current;

	public:
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
};

