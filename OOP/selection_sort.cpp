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
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            start();
            SelectionSort();
            cout << endl << "An enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            SelectionSortDE();
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
