#include "RPN.hpp"

void	calculus(char *c, int *top, int *second, int *result)
{
	switch (*c) 
	{
		case '*':
			*result = *second * *top;
			break;
		case '/':
			*result = *second / *top;
			break;
		case '+':
			*result = *second + *top;
			break;
		case '-':
			*result = *second - *top;
			break;
	}
}

int	exec(std::string &line, RPN &stack)
{
	for (std::string::iterator it = line.begin(); it != line.end(); it++)
	{
		char c = *it;
		if (isdigit(c)) 
		{
			int value = c - '0';
			stack.push(value);
		} 
		else if (c == ' ')
			continue;
		else if (c == '*' || c == '/' || c == '+' || c == '-')
		{
			//this was added to avoid segfaulting if input was incorrect : too many operations for too few digits
			if (stack.size() < 2) 
                return 0;

			int top = stack.top();
			stack.pop();
			int second = stack.top();
			stack.pop();
			int result;
			calculus(&c, &top, &second, &result);

			stack.push(result);
		}
		else 
			return 0;
	}
	return 1;
}

int	polish(char *av)
{
	RPN stack;
	std::string line = av;
	if (line.empty())
		return 0;
	if (!exec(line, stack))
		return 0;
	// std::cout << stack.size() << std::endl;
	if (!(stack.size() == 1))
		return 0;
	else
		std::cout << stack.top() << std::endl;
	return 1;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!polish(av[1]))
		{
			std::cout << "Error: syntax incorrect." << std::endl;
			return 1;
		}
		else
			return 0;
	}
	else
	{
		std::cout << "Error: syntax incorrect." << std::endl;
		return 1;
	}
	return 0;
}