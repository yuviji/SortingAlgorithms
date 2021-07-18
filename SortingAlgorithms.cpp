// SortingAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

int main()
{
    using namespace std;

    cout << "Select which sort algorithm to run: " << endl;
    cout << 
        "1. Selection Sort \n" << 
        "2. Insertion Sort \n" << 
        "3. Bubble Sort \n " << 
        "4. Merge Sort \n" <<
        endl;

    int choice;
    cin >> choice;

    int arr[25] = { 0, 6, 10, 100, 200, 237, 4, 65, 13, 45, 2, 432, 65, 123, 432, 543, 123, 145, 453, 212, 321, 5, 234, 54, 18 };

    //Selection Sort
    if (choice == 1)
    {
        SelectionSort sort;
        sort.sort(arr, size(arr));
    }

    //Insertion Sort
    else if (choice == 2)
    {
        InsertionSort sort;
        sort.sort(arr, size(arr));
    }

    //Bubble Sort
    else if (choice == 3)
    {
        BubbleSort sort;
        sort.sort(arr, size(arr));
    }
}