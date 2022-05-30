#include "Header.h"

int line;

int get(int n)
{
    int dem = 0;
    while (n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}
void Sort::counting_output_table(int max, int index[]) 
{
    Speed();
    system("cls");
    int x = 7 + get(max);
    int y = 0;
    wcout << L"Số: ";
    for (int i = 0; i <= max; i++)
    {
        if (index[i] != 0) {
            if (x > 70)
            {
                x = 7 + get(max);
                y++;
            }
            gotoXY(x, y);
            wcout << i;
            x = x + get(max) + 3;
        }
    }
    wcout << endl;
    wcout << endl << L"Tần số: ";
    y = y + 2;
    x = 7 + get(max);
    for (int i = 0; i <= max; i++) {
        if (index[i] != 0) {
            if (x > 70)
            {
                x = 7 + get(max);
                y++;
            }
            gotoXY(x, y);
            wcout << index[i];
            x = x + get(max) + 3;
        }
    }
    wcout << endl;
    Sleep(speed);
    line = y + 1;
}
void Sort::counting_output(int max, int index[])
{
    Speed();
    int x = 7 + get(max);
    int y = line + 1;
    wcout << L"\nDãy: ";
    for (int i = 0; i < amount; i++)
    {
        if (x > 70)
        {
            x = 7 + get(max);
            y++;
        }
        gotoXY(x, y);
        wcout << "        ";
        gotoXY(x, y);
        wcout << A[i];
        x = x + get(max) + 3;
    }
    Sleep(speed);
}

void Sort::CountingSort()
{
    int* B=new int[amount];
    int* index = new int[getMax()];
    int max = getMax();
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < amount; i++)
        index[A[i]]++;
    counting_output_table(max, index);
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
        counting_output(max, index);
    }
    delete[] B;
}
void Sort::CountingSortDE()
{
    int* B = new int[amount];
    int* index = new int[getMax()];
    int max = getMax();
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < amount; i++)
        index[A[i]]++;
    counting_output_table(max, index);
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
        counting_output(max, index);
    }
    delete[] B;
}

void Sort::Counting_Sort()
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
            CountingSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            CountingSortDE();
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
