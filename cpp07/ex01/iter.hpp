#pragma once

#include <string>
#include <iostream>
#include <cmath>

//"For any two types T and U, set value to false."
template <typename T, typename U>
struct is_same {
    static const bool value = false;
};

//This specialization overrides the primary template for the case 
//when both type parameters are the same, setting value to true.
template<typename T>
struct is_same<T, T> {
    static const bool value = true;
};
//When you instantiate is_same with two types, the compiler 
//will use the appropriate definition 
//(primary or specialized) to set the value of value.
template <typename T, typename U>
bool are_same_type(const T&, const U&) {
    return is_same<T, U>::value;
}


template <typename T, typename U>
void	swap(T &a, U &b)
{
	if (are_same_type(a,b))
	{
		T tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	else
		std::cout << "Both value types aren't the same" << std::endl;
}

template <typename T>
T	min(T &a, T &b)
{

	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;	

}