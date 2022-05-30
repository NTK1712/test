#include"Header.h"

void Sort::ShellSort()
{
	int k, i, j, temp;
	for (k = amount / 2; k > 0; k /= 2) 
	{
		request();
		for (i = k; i < amount; i++) 
		{
			temp = A[i];
			for (j = i; j >= k && A[j - k] > temp; j -= k) {
				A[j] = A[j - k];
			}
			A[j] = temp;
			output();
		}
	}
}
void Sort::ShellSortDE()
{
	int k, i, j, temp;
	for (k = amount / 2; k > 0; k /= 2)
	{
		request();
		for (i = k; i < amount; i++) 
		{
			temp = A[i];
			for (j = i; j >= k && A[j - k] < temp; j -= k) {
				A[j] = A[j - k];
			}
			A[j] = temp;
			output();
		}
	}
}

void Sort::Shell_Sort()
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
			ShellSort();
			wcout << endl << L"Bấm phím bất kì để quay lại\n";
			system("pause");
			break;
		case 2:
			system("cls");
			start();
			ShellSortDE();
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