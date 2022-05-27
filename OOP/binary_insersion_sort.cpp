#include"Header.h"

int binarySearch(int A[], int item, int low, int high)
{
    if (high <= low)
        return (item > A[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == A[mid])
        return mid + 1;

    if (item > A[mid])
        return binarySearch(A, item, mid + 1, high);
    return binarySearch(A, item, low, mid - 1);
}

void BinaryInsertionSort(int A[], int n)
{
    int i, loc, j, k, selected;

    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = A[i];

        loc = binarySearch(A, selected, 0, j);

        while (j >= loc)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = selected;
    }
}