#include "Header.h"

void Sort::SelectionSort()
{
    int min;
    for (int i = 0; i < amount - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < amount; j++)
        {
            request();
            if (A[j] < A[min])  min = j;
        }
        swap(A[i], A[min]);
        output();
    }
}
void Sort::SelectionSortDE()
{
    int max;
    for (int i = 0; i < amount - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < amount; j++)
        {
            request();
            if (A[j] > A[max])  max = j;
        }
        swap(A[i], A[max]);
        output();
    }
}
void Sort::Selection_Sort()
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
            SelectionSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            SelectionSortDE();
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
