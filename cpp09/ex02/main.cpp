#include "PmergeMe.hpp"

void	print_array(PMEDeque &A)
{
	for (size_t i = 0; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
}

void	print_time(double diff, int n)
{
	std::cout << "Time to process a range of " << n << " elements with deque : "
		<< diff << " us" << std::endl;
}

long	time_dif(struct timeval start, struct timeval end)
{
	long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    long elapsed_microseconds = seconds * 1000000 + microseconds;
	return elapsed_microseconds;
}


int main(int ac, char **av)
{
	if (ac > 2)
	{
		PMEDeque A;

		int threshold = 20;
		for (int i = 1; i < ac; i++)
		{
			A.push_back(std::atoi(av[i]));
		}
		std::cout << "Before: ";
		print_array(A);

		struct timeval start, end;
		gettimeofday(&start, NULL);
		A.merge_sort(A, 0, ac - 2, threshold);
		gettimeofday(&end, NULL);

		std::cout << "After:  ";
		print_array(A);
		double elapsed = time_dif(start, end);
		print_time(elapsed, A.size());
	}
	else
		std::cout << "Missing arguments" << std::endl;
	return 0;
}

// int main()
// {
// 	int A[10] = {4, 2, 1, 1, 8, 9, 13, 17, 10, 0};
// 	merge_sort(A, 0, 9);
// 	// insertion_sort(A, 10);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << A[i] << std::endl;
// 	}
// 	return 0;
// }