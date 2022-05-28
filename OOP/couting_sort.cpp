#include "Header.h"

void Sort::CountingSort() 
{
    int B[50000]{};
    int* index = new int[getMax(A, n)];
    int max = getMax(A, n);
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < n; i++)
        index[A[i]]++;
    for (int i = 1; i <= max; i++)
        index[i] += index[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < n; i++) {
        A[i] = B[i];
        output();
        request();
    }
}
void Sort::CountingSortDE()
{
    int B[50000]{};
    int* index = new int[getMax(A, n)];
    int max = getMax(A, n);
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < n; i++)
        index[A[i]]++;
    for (int i = 1; i <= max; i++)
        index[i] += index[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = B[n - i - 1];
        output();
        request();
    }
}

void Sort::Counting_Sort()
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
            CountingSort();
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            CountingSortDE();
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
