#include "Header.h"

void Sort::RadixSort()
{
    int m = getMax();
    for (int div = 1; m / div > 0; div *= 10) 
    {
        request();
        CountingSort(div);
        output(div);
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
        A[i] = B[i];
        //request();
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
        A[i] = B[amount - i - 1];
    }
}
void Sort::RadixSortDE()
{
    int m = getMax();
    for (int div = 1; m / div > 0; div *= 10)
    {
        request();
        CountingSortDE(div);
        output(div);
    }
}
void series(int div)
{
    switch (div)
    {
    case 1:
        wcout << L"Hàng đơn vị:\n\n";
        break;
    case 10:
        wcout << L"Hàng chục:\n\n";
        break;
    case 100:
        wcout << L"Hàng trăm:\n\n";
        break;
    case 1000:
        wcout << L"Hàng nghìn:\n\n";
        break;
    case 10000:
        wcout << L"Hàng chục nghìn:\n\n";
        break;
    case 100000:
        wcout << L"Hàng trăm nghìn:\n\n";
        break;
    }
}

// đếm số chữ số của một số
int number(int n)
{
    int dem = 0;
    while (n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}
// xuất bảng
void Sort::output(int div)
{
    Speed();
    system("cls");
    int index[10] = { 0 };
    series(div);

    // tìm vị trí đầu tiên của phần tử có hàng bằng i
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < amount; j++)
            if (A[j] / div % 10 == i)
            {
                index[i] = j;
                break;
            }
    }
    // in bảng
    for (int i = 0; i < 10; i++)
    {
        gotoXY(10 * (i + 1), 2);
        wcout << i;
    }
    wcout << "\n-------------------------------------------------------------------------------------------------------\n";
    int dem = 0, x = 0;
    // điền các giá trị vào
    while (dem < amount)
    {
        for (int i = 0; i < 10; i++)
        {
            if (A[index[i]] / div % 10 == i)
            {
                gotoXY(10 * (i + 1) - number(A[index[i]]) + 1, x + 4);
                wcout << A[index[i]++];
                dem++;
                Sleep(speed);
            }
        }
        x++;  
    }
    // xuất dãy
    wcout << L"\n\nDãy số = ";
    for (int i = 0; i < amount; i++)
    {
        request();
        wcout << A[i] << " ";
        Sleep(500);
    }
    wcout << endl;
}

void Sort::Radix_Sort()
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
            RadixSort();
            wcout << endl << L"Bấm phím bất kì để quay lại\n";
            system("pause");
            break;
        case 2:
            system("cls");
            start();
            RadixSortDE();
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