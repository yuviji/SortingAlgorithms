#include <iostream>
#include "InsertionSort.h"

using namespace std;

/*
	Time Complexity: O(n^2)
*/

InsertionSort::InsertionSort() : n(0)
{
}

void InsertionSort::sort(int arr[], int numTerms)
{
	n = numTerms;
	int key, z; //key is the new value to insert, z is the smallest index of unsorted array

	for (int i = 0; i < n; i++)
	{
		key = arr[i]; //Set value to insert as current element iterating
		z = i; //Set smallest index of unsorted array to the current element's index
		bool bShifted = false; //Check if any elements were shifted
		while (z > 0 && arr[z - 1] > key) //While smallest index of unsorted array > 0 & previous element > value to insert
		{
			arr[z] = arr[z - 1]; //Shift it left 1 unit

			if (bShifted == false)
			{
				bShifted = true;
			}

			z--;
		}
		if (bShifted == true)
		{
			arr[z] = key;
		}
	}
	if (checkOrder(arr, n))
	{
		display(arr, n); //Display it
	}
	return;
}