#!/bin/bash

# Check if class name is provided
if [ -z "$1" ]; then
  echo "Please provide a class name."
  exit 1
fi

# Class name
class_name=$1

# Create .hpp file
hpp_file="${class_name}.hpp"
cpp_file="${class_name}.cpp"

echo "Creating ${hpp_file} and ${cpp_file}..."

# Write to .hpp file
cat <<EOL > ${hpp_file}
#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <exception>

class ${class_name} 
{
	private:

	public:
    ${class_name}();
    ~${class_name}();
    ${class_name}(const ${class_name}& other);
    ${class_name}& operator=(const ${class_name}& other);
};

EOL

# Write to .cpp file
cat <<EOL > ${cpp_file}
#include "${hpp_file}"

${class_name}::${class_name}() 
{
}

${class_name}::~${class_name}() 
{
}

${class_name}::${class_name}(const ${class_name}& other) 
{
}

${class_name}& ${class_name}::operator=(const ${class_name}& other) 
{
    if (this != &other)
	{

	}
    return *this;
}
EOL

echo "Files created successfully."

