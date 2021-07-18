#pragma once
#include <iostream>
using namespace std;

class Sort
{
public:
	void display(int arr[])
	{
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
		return;
	};
	void swap(int* a, int* b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
		return;
	};
	bool checkOrder(int arr[])
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1]) return false;
		}
		return true;
	};

protected:
	int n;
};

