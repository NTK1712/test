#include"Header.h"

void Sort::ShakerSort()
{
	int Left = 0;
	int Right = amount - 1;
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

void Sort::ShakerSortDE()
{
	int Left = 0;
	int Right = amount - 1;
	int k = 0;
	while (Left < Right)
	{
		for (int i = Left; i < Right; i++)
		{
			if (A[i] < A[i + 1])
			{
				swap(A[i], A[i + 1]);
				k = i;
			}
		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (A[i] > A[i - 1])
			{
				swap(A[i], A[i - 1]);
				k = i;
			}
		}
		Left = k;
	}
}

void Sort::Shaker_Sort()
{
	int ch;
	do
	{
		system("cls");
		cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			start();
			ShakerSort();
			cout << endl << "Bam enter de quay lai\n";
			system("pause");
			break;
		case 2:
			system("cls");
			start();
			ShakerSortDE();
			cout << endl << "Bam enter de quay lai\n";
			system("pause");
			break;
		case 4:
			menu();
		default:
			break;
		}
	} while (ch != 3);
}