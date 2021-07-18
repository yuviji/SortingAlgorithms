#pragma once
#include "Sort.h"

class MergeSort : public Sort
{
public:
	MergeSort();
	void sort(int[], int);
protected:
	int n;
};