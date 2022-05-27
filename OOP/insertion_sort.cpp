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
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            InsertionSort();
            cout << endl << "An enter de quay lai\n";
            system("pause");
            break;
        case 2:
            InsertionSortDE();
            cout << endl << "An enter de quay lai\n";
            system("pause");
            break;
        case 4:
            menu();
        default:
            break;
        }
    } while (ch != 3);
}
