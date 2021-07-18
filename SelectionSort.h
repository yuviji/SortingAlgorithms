#pragma once
#include "Sort.h"

class SelectionSort : public Sort
{
public:
	SelectionSort();
	void sort(int[], int);

protected:
	int n;
};