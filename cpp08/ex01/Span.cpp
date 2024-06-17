#include "Span.hpp"

Span::Span(unsigned int n) :  _int(), _limit(n)
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
	if (_int.size() < _limit)
		_int.push_back(num);
	else
		throw std::exception();

}

int	Span::longestSpan()
{
	if (_int.size() > 1)
	{
		int max = *std::max_element(_int.begin(), _int.end());
		int min = *std::min_element(_int.begin(), _int.end());
		return max - min;
	}
	else
		throw std::exception();	
}

int	Span::shortestSpan()
{
	if (_int.size() > 1)
	{
   		std::vector<int> sorted_vec = _int;
    	std::sort(sorted_vec.begin(), sorted_vec.end());
		int min_diff = __INT_MAX__;
		// std::vector<int>::iterator it;
    	for (size_t i = 0; i < sorted_vec.size() - 1; i++) 
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

void	Span::addNumbers(it start, it end)
{
	//std::distance(begin, end) calculates the number of elements between two iterators, begin and end.
	size_t	distance = std::distance(start, end);
	if (_int.size() + distance > _limit)
		throw std::exception();
	else
		_int.insert(_int.end(), start, end);
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