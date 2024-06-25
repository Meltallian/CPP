#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <sys/time.h>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <exception>

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

class PMEList : public std::list<int>
{
	private:

	public:
    PMEList();
    ~PMEList();
    PMEList(const PMEList& other);
    PMEList& operator=(const PMEList& other);

	void merge_sort(PMEDeque &A, int start, int end, int n);
};