#include "Header.h"

void Sort::CountingSort() {
    int max = getMax(A, n);
	int* arr = new int[max]{};
	for (int i = 0; i < max; i++)
		arr[A[i]]++;
}

void Sort::CountingSort(int arr[], int n, int div)
{
    int* out = new int[n];
    int i, bucket[10] = { 0 };
    for (i = 0; i < n; i++)
        bucket[(arr[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        bucket[i] += bucket[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        out[bucket[(arr[i] / div) % 10] - 1] = arr[i];
        bucket[(arr[i] / div) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = out[i];
}