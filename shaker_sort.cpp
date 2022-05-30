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
				request();
				swap(A[i], A[i + 1]);
				output();
				k = i;
			}

		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (A[i] < A[i - 1])
			{			
				request();
				swap(A[i], A[i - 1]);
				output();
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
				request();
				swap(A[i], A[i + 1]);
				output();
				k = i;
			}

		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (A[i] > A[i - 1])
			{
				request();
				swap(A[i], A[i - 1]);
				output();
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
		wcout << L"Chọn cách sắp xếp:\n1. Sắp xếp tăng dần\n2. Sắp xếp giảm dần\n3. Quay lại\n4. Quay lại menu\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			start();
			ShakerSort();
			wcout << endl << L"Bấm phím bất kì để quay lại\n";
			system("pause");
			break;
		case 2:
			system("cls");
			start();
			ShakerSortDE();
			wcout << endl << L"Bấm phím bất kì để quay lại\n";
			system("pause");
			break;
		case 4:
			menu();
		default:
			break;
		}
	} while (ch != 3);
}