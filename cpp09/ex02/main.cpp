#include "PmergeMe.hpp"

void	print_time(double diff, int n)
{
	std::cout << "Time to process a range of " << n << " elements with deque : "
		<< diff << " us" << std::endl;
}

void	print_time_vec(double diff, int n)
{
	std::cout << "Time to process a range of " << n << " elements with vector : "
		<< diff << " us" << std::endl;
}

long	time_dif(struct timeval start, struct timeval end)
{
	long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    long elapsed_microseconds = seconds * 1000000 + microseconds;
	return elapsed_microseconds;
}

int	parser(char *av)
{
	for (int i = 0; i < av[i]; i++)
	{
		if (av[i] > '9' || av[i] < '0')
			return 0;
	}
	return 1;
}

int main(int ac, char **av)
{
	if (ac > 2)
	{
		for (int i = 1; i < ac; i++)
		{
			if (!parser(av[i]))
			{
				std::cout << "Error" << std::endl;
				return 1;
			}
		}

		PmergeMe A;
		int threshold = 20;

		struct timeval start, end;
		gettimeofday(&start, NULL);

		for (int i = 1; i < ac; i++)
		{
			A.addNumber_deq(std::atoi(av[i]));
		}

		std::cout << "Before: ";
		A.print_deque(A);

		A.merge_sort_deq(A, 0, ac - 2, threshold);
		gettimeofday(&end, NULL);

		struct timeval start2, end2;
		gettimeofday(&start2, NULL);

		for (int i = 1; i < ac; i++)
		{
			A.addNumber_vec(std::atoi(av[i]));
		}

		A.merge_sort_vec(A, 0, ac - 2, threshold);
		gettimeofday(&end2, NULL);

		// std::cout << "After:  ";
		// A.print_deque(A);

		// std::cout << "After:  ";
		// A.print_vector(A);
		double elapsed = time_dif(start, end);
		double elapsed2 = time_dif(start2, end2);
		print_time(elapsed, ac - 1);
		print_time_vec(elapsed2, ac - 1);
	}
	else
		std::cout << "Missing arguments" << std::endl;
	return 0;
}

// void	print_array_vec(std::vector<int> A)
// {
// 	for (size_t i = 0; i < A.size(); i++)
// 	{
// 		std::cout << A[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// void	print_array(PMEDeque &A)
// {
// 	for (size_t i = 0; i < A.size(); i++)
// 	{
// 		std::cout << A[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// void	print_array_vec(PMEVector &A)
// {
// 	for (size_t i = 0; i < A.size(); i++)
// 	{
// 		std::cout << A[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// int main(int ac, char **av)
// {
// 	if (ac > 2)
// 	{
// 		for (int i = 1; i < ac; i++)
// 		{
// 			if (!parser(av[i]))
// 			{
// 				std::cout << "Error" << std::endl;
// 				return 1;
// 			}
// 		}
// 		PMEDeque A;
// 		PMEVector V;

// 		int threshold = 20;
// 		struct timeval start, end;
// 		gettimeofday(&start, NULL);
// 		for (int i = 1; i < ac; i++)
// 		{
// 			A.push_back(std::atoi(av[i]));
// 		}

// 		std::cout << "Before: ";
// 		print_array(A);

// 		A.merge_sort(A, 0, A.size() - 1, threshold);
// 		gettimeofday(&end, NULL);

// 		struct timeval start2, end2;
// 		gettimeofday(&start2, NULL);

// 		for (int i = 1; i < ac; i++)
// 		{
// 			V.push_back(std::atoi(av[i]));
// 		}

// 		V.merge_sort(V, 0, V.size() - 1, threshold);
// 		gettimeofday(&end2, NULL);

// 		std::cout << "After:  ";
// 		print_array(A);
// 		// std::cout << "After:  ";
// 		// print_array_vec(V);
// 		double elapsed = time_dif(start, end);
// 		double elapsed2 = time_dif(start2, end2);
// 		print_time(elapsed, A.size());
// 		print_time_vec(elapsed2, V.size());
// 	}
// 	else
// 		std::cout << "Missing arguments" << std::endl;
// 	return 0;
// }

// void	print_array(std::deque<int> A)
// {
// 	for (size_t i = 0; i < A.size(); i++)
// 	{
// 		std::cout << A[i] << " ";
// 	}
// 	std::cout << std::endl;
// }