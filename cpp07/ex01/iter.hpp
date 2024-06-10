#pragma once

#include <string>
#include <iostream>
#include <cmath>

template <typename T, typename U, typename F>
void	iter(T *array, U len, F f)
{
	for (U i = 0; i < len; i++)
	{
		f(array[i]);
	}
}
