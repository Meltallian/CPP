#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <stdint.h>


typedef struct s_data
{
	int	i;
	double d;
	float f;
}	Data;

class Serialization 
{
	private:
    Serialization();
	public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);

    // ~Serialization();
    // Serialization(const Serialization& other);
    // Serialization& operator=(const Serialization& other);
};

