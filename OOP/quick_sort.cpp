#include "Header.h"

int Sort::partition(int low, int high)
{
    int pivot = A[(low + high) / 2];
    while (low < high)
    {
        while (A[low] < pivot)
            low++;
        while (A[high] > pivot)
            high--;
        if (low <= high)
        {
            swap(A[low], A[high]);
            low++;
            high--;
        }
    }
    int m1 = low;
    int m2 = high;
    return m1, m2;
}

void Sort::QuickSort()
{
    partition( 0, amount - 1);
}