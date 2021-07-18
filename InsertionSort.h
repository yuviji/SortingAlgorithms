#pragma once
#include "Sort.h"

class InsertionSort : public Sort
{
public:
	InsertionSort();
	void sort(int[], int);

protected:
	int n;
};