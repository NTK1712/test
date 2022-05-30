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
        wcout << L"Chọn cách sắp xếp:\n1. Sắp xếp tăng dần\n2. Sắp xếp giảm dần\n3. Quay lại\n4. Quay lại menu\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            start();
            QuickSort(0,amount-1);
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();            
            QuickSortDE(0, amount - 1);
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