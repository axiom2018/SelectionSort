// main.cpp
#include <iostream>
#include <conio.h>
#include "SelectionSortAlgorithm.h"

/*
Algorithm: Selection Sort.
Author: Omar Moodie.
Github link: https://github.com/axiom2018
Date: 4/18/2019
Best case: O(n^2)
Average case: O(n^2)
Worst case: O(n^2)
*/

int main()
{
	// Create the algorithm class object.
	SelectionSortAlgorithm ssa;

	// Sample array of different sizes with random values.
	int firstArr[8] = { 100, 90, 80, 70, 60, 50, 40, 30 };
	int secondArray[5] = { 9, 56, 68, 25, 26 };
	int thirdArray[7] = { 3, 11, 92, 55, 32, 67, 8 };

	// Call selection sort and print the array.
	ssa.SelectionSort(firstArr, 8);
	ssa.PrintArray(firstArr, 8);

	// Call selection sort and print the array.
	ssa.SelectionSort(secondArray, 5);
	ssa.PrintArray(secondArray, 5);

	// Call selection sort and print the array.
	ssa.SelectionSort(thirdArray, 7);
	ssa.PrintArray(thirdArray, 7);

	_getch();
	return 0;
}