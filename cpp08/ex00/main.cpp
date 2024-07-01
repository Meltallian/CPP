#include "easyfind.hpp"

int main()
{
	std::vector<int> a; 
	int arr[] = {5, 1, 8};
	a.assign(arr, arr + sizeof(arr) / sizeof(int));
	int b = 8;
	try {
		std::cout << *easyfind(a, b) << std::endl;
		// std::cout << easyfind_int(a, b) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}