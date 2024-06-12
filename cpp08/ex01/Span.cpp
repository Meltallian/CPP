#include "Span.hpp"

Span::Span(unsigned int n) :  _int(), _limit(n), _current(0)
{
}

Span::~Span() 
{
}

Span::Span(const Span& other) 
{
	*this = other;
}

Span& Span::operator=(const Span& other) 
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}

void	Span::addNumber(int num)
{
	if (_current < _limit)
	{
		_int.push_back(num);
		_current++;
	}
	else
		throw std::exception();

}

// int		Span::longestSpan()
// {
// 	if (_current > 1 && _current < 8)
// 	{
// 		int min = _int[0];
// 		int max = _int[0];
// 		std::vector<int>::iterator it;
// 		for (it = _int.begin(); it != _int.end(); it++)
// 		{
// 			if (*it < min)
// 				min = *it;
// 			if (*it > max)
// 				max = *it;
// 		}
// 		return max - min;
// 	}
// 	else
// 		throw std::exception();	
// }

int		Span::longestSpan()
{
	if (_current > 1 && _current < _limit)
	{
		int max = *std::max_element(_int.begin(), _int.end());
		int min = *std::max_element(_int.begin(), _int.end());
		return max - min;
	}
	else
		throw std::exception();	
}

int	Span::shortestSpan()
{
	if (_current > 1 && _current < _limit)
	{
   		std::vector<int> sorted_vec = _int;
    	std::sort(sorted_vec.begin(), sorted_vec.end());
		int min_diff;
		// std::vector<int>::iterator it;
    	for (size_t i = 0; i < _current - 1; i++) 
		{
        	int diff = sorted_vec[i + 1] - sorted_vec[i];
        	if (diff < min_diff)
            	min_diff = diff;
		}
		return min_diff;
	}
	else
		throw std::exception();	

}