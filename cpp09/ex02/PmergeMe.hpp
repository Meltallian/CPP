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
class PMEDeque : public std::deque<int>
{
	private:

	public:
    PMEDeque();
    ~PMEDeque();
    PMEDeque(const PMEDeque& other);
    PMEDeque& operator=(const PMEDeque& other);

	void merge_sort(PMEDeque &A, int start, int end, int n);

};

class PMEVector : public std::vector<int>
{
	private:

	public:
    PMEVector();
    ~PMEVector();
    PMEVector(const PMEVector& other);
    PMEVector& operator=(const PMEVector& other);

	void merge_sort(PMEVector &A, int start, int end, int n);
};