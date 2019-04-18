// SelectionSortAlgorithm.cpp
#include "SelectionSortAlgorithm.h"
#include <iostream>

void SelectionSortAlgorithm::Swap(int * pOne, int * pTwo)
{
	// The first pointer will lose it's original value in the next step, save it in a temp variable.
	int temp = *pOne;

	// Assign the first pointer to the second pointer.
	*pOne = *pTwo;

	// Now assign the second pointer to the temp.
	*pTwo = temp;
}

void SelectionSortAlgorithm::SelectionSort(int arr[], const int & size)
{
	/* The algorithm will begin by getting the index of the first element because it needs some index to start with and check every OTHER part of the array to ask the
	question "Okay is THIS number smaller than that other number we have?" If so, we'll update the index. Example array: 100, 90, 80, 70, 60, 50, 40, 30, the minIndex
	will at index 0 when the algorithm begins because i will be 0. */
	for (int i = 0; i < size - 1; ++i)
	{
		// Create the variable that will hold the current index to check against the rest of the array. In the example array, the index will refer to 100.
		int minIndex = i;

		/* This nested for loop will check against every other value in the array to check for a smaller value. Which is why it begins at "j = i + 1". It sort of makes
		a sub array out of the primary array. In the example array, j will begin at 90. */
		for (int j = i + 1; j < size; ++j)
		{
			// In the example array, 100, 90, 80, 70, 60, 50, 40, 30. arr[j] is 90, and arr[minIndex] is 100. Is 90 less than 100? Of course!
			if (arr[j] < arr[minIndex])
			{
				// If it is indeed smaller, update the minimum index and it will keep going through the entire array to make SURE this is the smallest value.
				minIndex = j;
			}
		}

		/* Swap! After we find the smallest value in the subarray, go ahead and swap. It can be any index. In the example array 100, 90, 80, 70, 60, 50, 40, 30 we'll
		end up swapping 100 and 30 first. So the  array will be 30, 90, 80, 70, 60, 50, 40, 100. */
		Swap(&arr[minIndex], &arr[i]);
	}
}

// Simple function to display the array given.
void SelectionSortAlgorithm::PrintArray(int arr[], const int & size) const
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}
