#include "iter.hpp"

// Example function to be used with iter
void printElement(int elem)
{
    std::cout << elem << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::size_t len = sizeof(arr) / sizeof(arr[0]);

    // Using iter with a function pointer
    iter(arr, len, printElement);
    std::cout << std::endl;


    return 0;
}