#include"Header.h"

void Sort::InterChangeSort()
{
    for (int i = 0; i < amount - 1; i++) 
    {
        for (int j = i + 1; j < amount; j++)
        {
            if (A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
            output();
            request();
        }
    }
}
void Sort::InterChangeSortDE()
{
    for (int i = 0; i < amount - 1; i++)
    {
        for (int j = i + 1; j < amount; j++)
        {
            if (A[i] < A[j])
            {
                swap(A[i], A[j]);
            }   
            output();
            request();
        }

    }    
}
void Sort::InterChange_Sort()
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
            InterChangeSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            InterChangeSortDE();
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