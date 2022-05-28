#include "Header.h"

void Sort::Merge(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];


    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];

    int i = 0, j = 0, current = left;

    while (i < n1 && j < n2)
        if (LeftArr[i] <= RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];


    while (i < n1)
        A[current++] = LeftArr[i++];

    while (j < n2)
        A[current++] = RightArr[j++];

    delete[] LeftArr, RightArr;
}

void Sort::MergeS(int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        MergeS(left, mid);
        MergeS( mid + 1, right);
        Merge(left, mid, right);
    }
}

void Sort::MergeSort()
{
    MergeS(0, amount - 1);
}