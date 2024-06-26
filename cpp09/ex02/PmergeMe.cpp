#include "PmergeMe.hpp"

void insertion_sort(PMEDeque &A, int start, int end) 
{
	for (int i = start + 1; i <= end; ++i) 
	{
		int key = A[i];
		int j = i - 1;
		// Move elements of A[start..i-1], that are greater than key,
        // to one position ahead of their current position
		while (j >= start && A[j] > key) 
		{
			A[j + 1] = A[j];
			j -= 1;
		}
		A[j + 1] = key;
	}
}

// Function to merge two sorted subarrays A[start..mid] and A[mid+1..end]
void merge(PMEDeque &A, int start, int mid, int end) 
{
	int n1 = mid - start + 1; // Size of the first subarray
	int n2 = end - mid;       // Size of the second subarray
	// Create temporary arrays
	std::deque<int> L(n1);
	std::deque<int> R(n2);
	// Copy data to temporary arrays L[] and R[]
	for (int i = 0; i < n1; ++i)
		L[i] = A[start + i];
	for (int i = 0; i < n2; ++i)
		R[i] = A[mid + 1 + i];
	// Merge the temporary arrays back into A[start..end]
	int i = 0, j = 0, k = start;
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			A[k] = L[i];
			i++;
		} 
		else 
		{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) 
	{
		A[k] = L[i];
		i++;
		k++;
	}
	// Copy the remaining elements of R[], if there are any
	while (j < n2) 
	{
		A[k] = R[j];
		j++;
		k++;
	}
}

void PMEDeque::merge_sort(PMEDeque &A, int start, int end, int n)
{
	if (start < end) 
	{
		int subarray_size = end - start + 1; // Size of the current subarray
		// If the size of the subarray is less than or equal to n, use insertion sort
		if (subarray_size <= n)
			insertion_sort(A, start, end);
		else 
		{
			// Otherwise, divide the array into two halves and sort them
			int mid = (start + end) / 2;
			merge_sort(A, start, mid, n);       // Sort the first half
			merge_sort(A, mid + 1, end, n);     // Sort the second half
			merge(A, start, mid, end);          // Merge the sorted halves
		}
	}
}

PMEDeque::PMEDeque() : std::deque<int>()
{
}

PMEDeque::~PMEDeque() 
{
}

PMEDeque::PMEDeque(const PMEDeque& other) : std::deque<int>()
{
	*this = other;
}

PMEDeque& PMEDeque::operator=(const PMEDeque& other) 
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}

///////////////////////////////////////////////////////

void insertion_sort(PMEVector &A, int start, int end) 
{
	for (int i = start + 1; i <= end; ++i) 
	{
		int key = A[i];
		int j = i - 1;
		// Move elements of A[start..i-1], that are greater than key,
		// to one position ahead of their current position
		while (j >= start && A[j] > key) 
		{
			A[j + 1] = A[j];
			j -= 1;
		}
		A[j + 1] = key;
	}
}

// Function to merge two sorted subarrays A[start..mid] and A[mid+1..end]
void merge(PMEVector &A, int start, int mid, int end) 
{
	int n1 = mid - start + 1; // Size of the first subarray
	int n2 = end - mid;       // Size of the second subarray
	// Create temporary arrays
	std::vector<int> L(n1);
	std::vector<int> R(n2);
	// Copy data to temporary arrays L[] and R[]
	for (int i = 0; i < n1; ++i)
		L[i] = A[start + i];
	for (int i = 0; i < n2; ++i)
		R[i] = A[mid + 1 + i];
	// Merge the temporary arrays back into A[start..end]
	int i = 0, j = 0, k = start;
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			A[k] = L[i];
			i++;
		} 
		else 
		{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) 
	{
		A[k] = L[i];
		i++;
		k++;
	}
	// Copy the remaining elements of R[], if there are any
	while (j < n2) 
	{
		A[k] = R[j];
		j++;
		k++;
	}
}

void PMEVector::merge_sort(PMEVector &A, int start, int end, int n)
{
	if (start < end) 
	{
		int subarray_size = end - start + 1; // Size of the current subarray
		// If the size of the subarray is less than or equal to n, use insertion sort
		if (subarray_size <= n)
			insertion_sort(A, start, end);
		else 
		{
			// Otherwise, divide the array into two halves and sort them
			int mid = (start + end) / 2;
			merge_sort(A, start, mid, n);       // Sort the first half
			merge_sort(A, mid + 1, end, n);     // Sort the second half
			merge(A, start, mid, end);          // Merge the sorted halves
		}
	}
}

PMEVector::PMEVector() : std::vector<int>()
{
}

PMEVector::~PMEVector() 
{
}

PMEVector::PMEVector(const PMEVector& other) : std::vector<int>()
{
	*this = other;
}

PMEVector& PMEVector::operator=(const PMEVector& other) 
{
    if (this != &other)
	{
		*this = other;
	}
    return *this;
}