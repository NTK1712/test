#include "Header.h"

void Sort::RadixSort()
{
    int m = getMax();
    for (int div = 1; m / div > 0; div *= 10)
        CountingSort( div);
}