#include "Header.h"

Sort::Sort()
{
	amount = 0;
	speed = 0;
	A = new int[amount];
}
Sort::Sort(int n, int x)
{
	amount = n;
	A = new int[amount];
	speed = 0;
	for (int i = 0; i < amount; i++) A[i] = x;
}
Sort::~Sort()
{
	delete[] A;
}


int Sort::getMax() {
	int max = A[0];
	for (int i = 0; i < amount; i++) {
		if (A[i] > max)
			max = A[i];
	}
	return max;
}


void Sort::input_manual()
{
	cout << "Nhap so phan tu cua day: ";
	cin >> amount;
	A = new int[amount];
	for (int i = 0; i < amount; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
		//arrCount++;
	}
	cout << "Day da nhap: ";
	for (int i = 0; i < amount; i++) {
		cout << A[i] << " ";
	}
	cout << endl << "Bam phim enter de tiep tuc\n";
	system("pause");
}
void Sort::input_random()
{
	system("cls");
	cout << "Nhap so phan tu cua day: ";
	cin >> amount;
	A = new int[amount];
	for (int i = 0; i < amount; i++)
	{
		A[i] = rand() % 1000 + 0;
	}
	cout << "Mang da nhap: ";
	for (int i = 0; i < amount; i++) {
		cout << A[i] << " ";
	}
	cout << endl << "Bam phim enter de tiep tuc\n";
	system("pause");
}
void Sort::input_from_file()
{
	string link;
	bool kt;
	do
	{
		cout << "Nhap duong dan file: ";
		cin >> link;
		ifstream fileInput(link);
		if (fileInput.fail())
		{
			cout << "File khong ton tai moi nhap lai!" << endl;
		}
		kt = fileInput.fail();
	} while (kt);
	ifstream fileInput(link);
	for (int i = 0; !fileInput.eof(); i++)
	{
		fileInput >> A[i];
		amount++;
	}
	fileInput.close();
	A = new int[amount];
	for (int i = 0; i< amount-1; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl << "Bam phim enter de tiep tuc\n";
	system("pause");
}
void Sort::input()
{
	int ch;
	do
	{
		system("cls");
		cout << "\n1.Nhap truc tiep tung phan tu\n2.Nhap ngau nhien\n3.Nhap qua file\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input_manual();
			break;
		case 2:
			input_random();
			break;
		case 3:
			input_from_file();
			break;
		default:
			break;
		}
	} while (ch < 1 || ch > 4);
}

void Sort::output() {
	if (speed == 1)
		outputFast();
	if (speed == 2)
		outputNormal();
	if (speed == 3)
		outputSlow();
}
void Sort::outputFast() {
	system("cls");
	cout << "Day: ";
	for (int i = 0; i < amount; i++)
		cout << A[i] << " ";
	Sleep(100);
}
void Sort::outputNormal() {
	system("cls");
	cout << "Day: ";
	for (int i = 0; i < amount; i++)
		cout << A[i] << " ";
	Sleep(500);
}
void Sort::outputSlow() {
	system("cls");
	cout << "Day: ";
	for (int i = 0; i < amount; i++)
		cout << A[i] << " ";
	Sleep(1000);
}

void Sort::request()
{
	bool flag = false;
	char key;
	if (_kbhit())
	{
		key = _getch();
		if (key == 32)
		{
			if (flag == false)
			{
				cout << "\nNhan Spacebar de tiep tuc!\n";
			}
			flag = !flag;
		}
		else if (key == 27)
		{
			cout << "\nDang huy...";
			Sleep(2000);
			return;
		}
	}
	if (flag)
	{
		char key1 = _getch();
		if (key1 == 27)
		{
			Sleep(2000);
			return;
		}
		else
		{
			Sleep(1000);
		}
		flag = !flag;
	}
}

void Sort::chose()
{
	int ch = 0;
	do {
		system("cls");
		cout << "Chon toc do thuc hien thuat toan\n1. Nhanh\n2. Binh thuong\n3. Cham\n";
		cin >> speed;
	} while (speed < 1 || speed > 3);
	do
	{
		system("cls");
		cout << "\n1.Selection Sort\n2.InterchangeSort\n3.InsertionSort\n4.Binary Insersion Sort\n5.Bubble Sort\n6.Shaker Sort";
		cout << "\n7.Shell Sort\n8.Counting Sort\n9.Radix Sort\n10.Heap Sort\n11.Quick Sort\n12.Merge Sort\n13.Quay lai!\n14.Quay lai menu!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			Selection_Sort();
			break;
		case 2:
			InterChange_Sort();
			break;
		case 3:
			Insertion_Sort();
			break;
		case 4:
		case 5:
			Bubble_Sort();
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Heap_Sort();
			break;
		case 11:
		case 12:
			break;
		case 14:
			menu();
		default:
			break;
		}
	} while (ch != 13);
}

void Sort::menu()
{
	int ch;
	do
	{
		system("cls");
		cout << "\n1.Nhap day so\n2.Chon thuat toan sap xep\n3.Thoat!!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input();
			break;
		case 2:
			if (amount == 0) {
				cout << "Mang rong!!!" << endl;
				system("pause");
				continue;
			}
			chose();
			break;
		case 3:
			exit(0);
		default:
			break;
		}
	} while (ch != 3);
}
