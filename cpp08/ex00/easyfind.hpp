#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <exception>

template <typename C>
int easyfind_int(C &container, int value) 
{
	//typename C::iterator: This declares it as an iterator type for the container C. 
	//The typename keyword is necessary because C::iterator is a dependent type 
    typename C::iterator it;
	//std::find: This is a standard library function from <algorithm> that searches 
	//for the first occurrence of value in the range 
	//[container.begin(), container.end()].
	it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
	else
        return *it;
}

template <typename C>
typename C::iterator easyfind(C &container, int value) 
{
	//typename C::iterator: This declares it as an iterator type for the container C. 
	//The typename keyword is necessary because C::iterator is a dependent type 
    typename C::iterator it;
	//std::find: This is a standard library function from <algorithm> that searches 
	//for the first occurrence of value in the range 
	//[container.begin(), container.end()].
	it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
	else
        return it;
}

	//When std::find returns an iterator equal to container.end(), 
	//it means that the element was not found in the container. 
	//The end iterator represents a position one past the last element 
	//in the container and is not a valid dereferenceable iterator. 
	//This situation does not imply that the last element of the container was 
	//the searched value; instead, it explicitly indicates that the value was 
	//not found within the range.