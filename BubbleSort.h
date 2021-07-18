#pragma once
#include "Sort.h"

class BubbleSort : public Sort
{
public:
	BubbleSort();
	void sort(int[], int);

protected:
	int n;
};