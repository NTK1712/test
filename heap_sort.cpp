#include "Header.h"


void Sort::heapify(int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    request();
    if (l < n && A[l] > A[largest]) largest = l;
    if (r < n && A[r] > A[largest]) largest = r;
    if (largest != i)
    {
        swap(A[i], A[largest]);
        output();
        heapify(n, largest);
    }
}

void Sort::HeapSort()
{
    for (int i = amount / 2 - 1; i >= 0; i--)
    {
        heapify(amount, i);
    }
    for (int i = amount - 1; i > 0; i--)
    {
        swap(A[0], A[i]);
        output();
        heapify(i, 0);
    }
}


void Sort::heapifyDE(int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    request();
    if (l < n && A[l] < A[largest]) largest = l;
    if (r < n && A[r] < A[largest]) largest = r;
    if (largest != i)
    {
        swap(A[i], A[largest]);
        output();
        heapifyDE(n, largest);
    }
}
void Sort::HeapSortDE()
{
    for (int i = amount / 2 - 1; i >= 0; i--)
    {
        heapifyDE(amount, i);
    }
    for (int i = amount - 1; i > 0; i--)
    {
        swap(A[0], A[i]);
        output();
        heapifyDE(i, 0);
    }
}


void Sort::Heap_Sort()
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
            HeapSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            HeapSortDE();
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
