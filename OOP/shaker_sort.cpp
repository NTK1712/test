#include"Header.h"

void ShakerSort(int A[], int n)
{
	int Left = 0;
	int Right = n - 1;
	int k = 0;
	while (Left < Right)
	{
		for (int i = Left; i < Right; i++)
		{
			if (A[i] > A[i + 1])
			{
				swap(A[i], A[i + 1]);
				k = i;
			}
		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (A[i] < A[i - 1])
			{
				swap(A[i], A[i - 1]);
				k = i;
			}
		}
		Left = k;
	}
}

void ShakerSortDE(int A[], int n)
{
	int Left = 0;
	int Right = n - 1;
	int k = 0;
	while (Left < Right)
	{
		for (int i = Left; i < Right; i++)
		{
			if (A[i] < A[i + 1])			//11111
			{
				swap(A[i], A[i + 1]);
				k = i;
			}
		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (A[i] > A[i - 1])			//11111
			{
				swap(A[i], A[i - 1]);
				k = i;
			}
		}
		Left = k;
	}
}

void Shaker_Sort(int A[], int n)
{
	int ch;
	do
	{
		cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			ShakerSort(A, n);
			break;
		case 2:
			ShakerSortDE(A, n);
			break;
		default:
			break;
		}
	} while (ch != 3);
}