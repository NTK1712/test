#include "Header.h"

void Sort::MergeSort(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];
    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];
    int i = 0, j = 0, current = left;
    while (i < n1 && j < n2)
        if (LeftArr[i] <= RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];
    while (i < n1)
    {
        request();
        A[current++] = LeftArr[i++];
    }

    while (j < n2)
    {
        request();
        A[current++] = RightArr[j++];
    }
}
void Sort::MergeSortDE(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];
    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];
    int i = 0, j = 0, current = left;
    while (i < n1 && j < n2)
        if (LeftArr[i] > RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];
    while (i < n1)
    {
        request();
        A[current++] = LeftArr[i++];
    }

    while (j < n2)
    {
        request();
        A[current++] = RightArr[j++];
    }

}

void Sort::MergeS(int left, int right, int ch)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    MergeS(left, mid, ch);
    MergeS(mid + 1, right, ch);
    if (ch == 1)
        MergeSort(left, mid, right);
    else MergeSortDE(left, mid, right);
    output();
}

void Sort::Merge_Sort()
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
            MergeS(0, amount - 1, ch);
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            MergeS(0, amount - 1, ch);
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