// SelectionSortAlgorithm.h
#pragma once

class SelectionSortAlgorithm
{
	void Swap(int * pOne, int * pTwo);
public:
	void SelectionSort(int arr[], const int& size);
	void PrintArray(int arr[], const int& size) const;
};

