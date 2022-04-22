#include <iostream>
#include "BubbleSort.h"
using namespace std;

/*
	Time Complexity: O(n^2)
*/

BubbleSort::BubbleSort() : n(0)
{
}

void BubbleSort::sort(int arr[], int numTerms)
{
	for (int i = 0; i < numTerms; i++)
	{
		for (int j = 0; j < numTerms - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
	if (checkOrder(arr, n))
	{
		display(arr, n); //Display it
	}
}