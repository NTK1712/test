#include "Header.h"

void Sort::BubbleSort()
{
    for (int i = 0; i < amount - 1; i++) 
    {
        for (int j = 0; j < amount - i - 1; j++) 
        {
            if (A[j] > A[j + 1]) 
            {
                request();
                swap(A[j], A[j + 1]);
                output();
            }

        }
    }
}
void Sort::BubbleSortDE()
{
    for (int i = 0; i < amount - 1; i++)
    {
        for (int j = 0; j < amount - i - 1; j++)
        {

            if (A[j] < A[j + 1])
            {
                request();
                swap(A[j], A[j + 1]);
                output();
            }
        }
    }
}
void Sort::Bubble_Sort()
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
            BubbleSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            BubbleSortDE();
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
