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
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            start();
            BubbleSort();
            cout << endl << "An enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            BubbleSortDE();
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
