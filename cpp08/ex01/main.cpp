#include "Span.hpp"

// int main()
// {
// 	try {
// 		Span a(6);
// 		a.addNumber(1);
// 		a.addNumber(255);
// 		a.addNumber(5);
// 		a.addNumber(58);
// 		a.addNumber(3);
// 		a.addNumber(9);
// 		std::cout << a.shortestSpan() << std::endl;
// 		std::cout << a.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception& e)
// 	{
// 		std::cerr << "lol, c fo" << '\n';
// 	}
//     return 0;
// }

int main()
{
	try {

		std::vector<int> a; 
		int arr[] = {2, 10, 233, 1, 3};
		a.assign(arr, arr + sizeof(arr) / sizeof(int));
		
		std::vector<int> b; 
		int arro[] = {22, 110, 33, 16, 32};
		b.assign(arro, arro + sizeof(arro) / sizeof(int));


		Span span(100010);

		// for (int i = 0; i < 100000; i++)
		// {
		// 	span.addNumber(i * 3);
			
		// }

		span.addNumbers(a.begin(), a.end());
		span.addNumbers(b.begin(), b.end());
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "lol, c fo" << '\n';
	}
    return 0;
}