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
		cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			start();
			ShellSort();
			cout << endl << "Bam enter de quay lai\n";
			system("pause");
			break;
		case 2:
			system("cls");
			start();
			ShellSortDE();
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