#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <sys/time.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <exception>


//std::deque is designed to balance the benefits of both std::vector 
//and std::list. It achieves this by using a sequence of 
//contiguous memory blocks, called "chunks" or "segments," 
//rather than a single contiguous memory block like std::vector.

class PmergeMe
{
	private:
	std::deque<int>	d;
	std::vector<int> v;

	public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);

	void merge_sort_deq(PmergeMe &A, int start, int end, int n);
	void merge_sort_vec(PmergeMe &A, int start, int end, int n);

	void	print_deque(PmergeMe &A);
	void	print_vector(PmergeMe &A);

	void	addNumber_deq(int num);
	void	addNumber_vec(int num);
};


// class PMEDeque : public std::deque<int>
// {
// 	private:

// 	public:
//     PMEDeque();
//     ~PMEDeque();
//     PMEDeque(const PMEDeque& other);
//     PMEDeque& operator=(const PMEDeque& other);

// 	void merge_sort(PMEDeque &A, int start, int end, int n);

// };

// class PMEVector : public std::vector<int>
// {
// 	private:

// 	public:
//     PMEVector();
//     ~PMEVector();
//     PMEVector(const PMEVector& other);
//     PMEVector& operator=(const PMEVector& other);

// 	void merge_sort(PMEVector &A, int start, int end, int n);
// };