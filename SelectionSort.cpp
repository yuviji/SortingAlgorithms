#include <iostream>
#include "SelectionSort.h"

using namespace std;

SelectionSort::SelectionSort(): n(0)
{
}

void SelectionSort::sort(int arr[], int numTerms)
{
	n = numTerms; //Set number of terms in array to be passed value
	int min; //Used for storing latest minimum value's index

	for (int i = 0; i < n-1; i++)
	{
		min = i; //Set current arr[i] as minimum (for first iteration, will be 1st element)

		for (int z = i + 1; z < n; z++) //Iterate for all remaining indexes in array
		{
			if (arr[z] < arr[min]) //Check if the current remaining index is less that minimum
			{
				min = z; //Make that index the new minimum
			}
		}
		swap(&arr[i], &arr[min]); //Swap the first element in unsorted array with new minimum
	}

	if (checkOrder(arr)) display(arr); //Display it
	return;
}