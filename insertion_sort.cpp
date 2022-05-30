#include "Header.h"

void Sort::InsertionSort()
{
    int p, j;
    for (int i = 1; i < amount; i++)
    {
        p = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > p)
        {
            request();
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = p;
        output();
    }
}
void Sort::InsertionSortDE()
{
    int p, j;
    for (int i = 1; i < amount; i++)
    {
        p = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < p)
        {
            request();
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = p;
        output();
    }
}

void Sort::Insertion_Sort()
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
            InsertionSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            InsertionSortDE();
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
