#include "Header.h"

void Sort::CountingSort()
{
    int B[50000]{};
    int* index = new int[getMax()];
    int max = getMax();
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < amount; i++)
        index[A[i]]++;
    for (int i = 1; i <= max; i++)
        index[i] += index[i - 1];
    for (int i = amount - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < amount; i++) 
    {     
        request();
        A[i] = B[i];
        output();

    }
}
void Sort::CountingSortDE()
{
    int B[50000]{};
    int* index = new int[getMax()];
    int max = getMax();
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < amount; i++)
        index[A[i]]++;
    for (int i = 1; i <= max; i++)
        index[i] += index[i - 1];
    for (int i = amount - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < amount; i++)
    {
        request();
        A[i] = B[amount - i - 1];
        output();
    }
}

void Sort::Counting_Sort()
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
