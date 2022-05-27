#include"Header.h"

void shellSort(int A[], int n)
{
	int interval, i, j, temp;
	for (interval = n / 2; interval > 0; interval /= 2) {
		for (i = interval; i < n; i++) {
			temp = A[i];
			for (j = i; j >= interval && A[j - interval] > temp; j -= interval) {
				A[j] = A[j - interval];
			}
			A[j] = temp;
		}
	}
}