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
                output();
            }
            request();
        }
    }
}
void Sort::InterChangeSortDE()
{
    for (int i = 0; i < amount - 1; i++)
        for (int j = i + 1; j < amount; j++)
            if (A[i] < A[j])
            {
                swap(A[i], A[j]);
                output();
            }
}
void Sort::InterChange_Sort()
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
            InterChangeSort();
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            InterChangeSortDE();
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