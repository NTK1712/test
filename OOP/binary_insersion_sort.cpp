#include"Header.h"

int Sort::binarySearch(int item, int low, int high)
{
    if (high <= low)
        return (item > A[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == A[mid])
        return mid + 1;

    if (item > A[mid])
        return binarySearch( item, mid + 1, high);
    return binarySearch( item, low, mid - 1);
}

void Sort::BinaryInsertionSort()
{
    int i, loc, j, selected;

    for (i = 1; i < amount; ++i)
    {
        j = i - 1;
        selected = A[i];

        loc = binarySearch( selected, 0, j);

        while (j >= loc)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = selected;
        output();
    }
}
int Sort::binarySearchDE(int item, int low, int high)
{
    if (high > low)
        return (item > A[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == A[mid])
        return mid + 1;

    if (item <= A[mid])
        return binarySearchDE(item, mid + 1, high);
    return binarySearchDE(item, low, mid - 1);
}
void Sort::BinaryInsertionSortDE()
{
    int i, loc, j, selected;

    for (i = 1; i < amount; ++i)
    {
        j = i - 1;
        selected = A[i];

        loc = binarySearchDE(selected, 0, j);

        while (j >= loc)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = selected;
        output();
    }
}
void Sort::BinaryInsertion_Sort()
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
            BinaryInsertionSort();
            cout << endl << "Bam enter de quay lai\n";
            system("pause");
            break;
        case 2:
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