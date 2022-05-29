#include"Header.h"

void Sort::BinaryInsertionSort()
{
    int l, r, m;
    int x;
    for (int i = 1; i < amount; i++)
    {
        x = A[i]; l = 0;
        r = i - 1;
        while (l <= r)
        {
            request();
            m = (l + r) / 2;
            if (x < A[m]) r = m - 1;
            else l = m + 1;
        }
        for (int j = i - 1; j >= l; j--)
            A[j + 1] = A[j];
        A[l] = x;
        output();
    }
}

void Sort::BinaryInsertionSortDE()
{
    int l, r, m;
    int x;
    for (int i = 1; i < amount; i++)
    {
        x = A[i]; l = 0;
        r = i - 1;
        while (l <= r)  
        {
            request();
            m = (l + r) / 2;
            if (x > A[m]) r = m - 1;
            else l = m + 1;
        }
        for (int j = i - 1; j >= l; j--)
            A[j + 1] = A[j];
        A[l] = x;
        output();
    }
}
void Sort::BinaryInsertion_Sort()
{
    int ch;
    do
    {
        system("cls");
        cout << "Chon cach sap xep\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n4.Quay lai menu!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            start();
            BinaryInsertionSort();
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            BinaryInsertionSortDE();
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