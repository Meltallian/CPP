#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter() 
// {

// }

// ScalarConverter::~ScalarConverter() 
// {

// }

// ScalarConverter::ScalarConverter(const ScalarConverter &other) 
// {

// }

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
// {
// 	if (this != &other)
// 	{

// 	}
// 	return *this;
// }

void	simple_converter(std::string l)
{
	if (l.length() != 1)
	{
		std::cerr << "char: impossible" << std::endl;
	}
	else
	{
		char c = l[0];
		std::cout << "char: " << c << std::endl;
	}

    int		i;
	float	f;
	double	d;
	char	dot = '.';

    std::istringstream issi(l);
    issi >> i;
    if (issi.fail()) {
        std::cerr << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << i << std::endl;
    }

    std::istringstream issf(l);
	issf >> f;
    if (issf.fail()) {
        std::cerr << "float: impossible" << std::endl;
    } else {
		if (!l.find(dot))
        	std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
    }

    std::istringstream issd(l);
	issd >> d;
    if (issd.fail()) {
        std::cerr << "double: impossible" << std::endl;
    } else {
		if (!l.find(dot))
        	std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d  << std::endl;
    }
}

void	ScalarConverter::convert(std::string l)
{
	simple_converter(l);

	

}

