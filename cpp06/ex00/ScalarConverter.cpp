#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

void	ScalarConverter::convert(const std::string &l)
{
	std::string	specialTypes[6] =
	{
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	//toChar is used as a switch for multiple functions
	std::string toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;

	//isprintf returns 0 if not printable and any number if it is.
	//used to convert a single char into its numeric correspondant
	if (l.size() == 1 && std::isprint(l[0]) && !std::isdigit(l[0])) 
	{
		toChar = l[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}

	//can't use stoi since c++11 is forbidden
	toInt = std::atoi(l.c_str());

	if (l[l.length() - 1] == 'f')
	{
		toFloat = std::atof(l.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else
	{
		//atof actually converts a string to a double;
		//if the conversion fails it returns 0.0
		toDouble = std::atof(l.c_str());
		toFloat = static_cast<float>(toDouble);
	}
	for (int i = 0; i < 6; i++)
	{
		if (l == specialTypes[i])
		{
			toChar = "impossible"; 
			break;
		}
	}
	//used to convert an int into a char and print char 
	if (toChar == "" && std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else if (toChar == "")
		toChar = "Non displayable";
	std::cout << "char: " << toChar << std::endl;

	//used to convert whatever into an int and print
	if (toChar == "impossible")
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << toInt << std::endl;
	}
	//case where the float/double conversion did not work
	//while toChar recognised the pseudo literals
	//should never happen
	if (toChar == "impossible" && toFloat == 0)
	{
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		//the soustraction calculus is used to check whether the float possess
		//a decimal or not. if it doesn't then print it
		if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0)
		{
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble  << std::endl;	
		}
	}
}

