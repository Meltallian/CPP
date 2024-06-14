#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class Span 
{
	private:
	std::vector<int> _int;
	unsigned int	_limit;

	public:
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();

	void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

