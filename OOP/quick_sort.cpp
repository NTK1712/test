#include "Header.h"

int Sort::partition(int low, int high)
{
    int pivot = A[high];
    int left = low;
    int right = high - 1;
    while (true) 
    {
        request();
        while (left <= right && A[left] < pivot) left++;
        while (right >= left && A[right] > pivot) right--; 
        if (left >= right) break;
        swap(A[left], A[right]); 
        output();
        left++;
        right--;
    }
    swap(A[left], A[high]);
    output();
    return left;
}

void Sort::QuickSort(int low, int high)
{
    if (low < high)
    {
        int pi = partition(low, high);
        QuickSort(low, pi - 1);
        QuickSort(pi + 1, high);
    }
}

int Sort::partitionDE(int low, int high)
{
    int pivot = A[high];
    int left = low;
    int right = high - 1;
    while (true)
    {
        request();
        while (left <= right && A[left] > pivot) left++;
        while (right >= left && A[right] < pivot) right--;
        if (left >= right) break;
        swap(A[left], A[right]);
        output();
        left++;
        right--;
    }
    swap(A[left], A[high]);
    output();
    return left;
}

void Sort::QuickSortDE(int low, int high)
{
    if (low < high)
    {
        int pi = partitionDE(low, high);
        QuickSortDE(low, pi - 1);
        QuickSortDE(pi + 1, high);
    }
}

void Sort::Quick_Sort()
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
            QuickSort(0,amount-1);
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();            
            QuickSortDE(0, amount - 1);
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