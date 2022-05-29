#include "Header.h"

void Sort::RadixSort()
{
    int m = getMax();
    for (int div = 1; m / div > 0; div *= 10) 
    {
        request();
        CountingSort(div);
        output();
    }
}
void Sort::CountingSort(int div)
{
    int* B = new int[amount];
    int i, index[10]{};
    for (i = 0; i < amount; i++)
        index[(A[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        index[i] += index[i - 1];
    for (i = amount - 1; i >= 0; i--)
    {
        B[index[(A[i] / div) % 10] - 1] = A[i];
        index[(A[i] / div) % 10]--;
    }
    for (int i = 0; i < amount; i++)
    {
        A[i] = index[i];
        output();
    }
}

void Sort::CountingSortDE(int div)
{
    int* B = new int[amount];
    int i, index[10]{};
    for (i = 0; i < amount; i++)
        index[(A[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        index[i] += index[i - 1];
    for (i = amount - 1; i >= 0; i--)
    {
        B[index[(A[i] / div) % 10] - 1] = A[i];
        index[(A[i] / div) % 10]--;
    }
    for (int i = 0; i < amount; i++)
    {
        A[i] = index[amount - i - 1];
        output();
    }
}
void Sort::RadixSortDE()
{
    int m = getMax();
    for (int div = 1; m / div > 0; div *= 10)
    {
        request();
        CountingSortDE(div);
        output();
    }
}

void Sort::Radix_Sort()
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
            RadixSort();
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            RadixSortDE();
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