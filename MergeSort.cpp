#include <iostream>
#include "MergeSort.h"

using namespace std;

/*
	Time Complexity: O(n * log(n))
*/

MergeSort::MergeSort() : n(0)
{
}

void MergeSort::sort(int arr[], int numTerms)
{
	if (checkOrder(arr, n))
	{
		display(arr, n); //Display it
	}
	return;
}