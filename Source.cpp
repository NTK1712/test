#include "Header.h"

void resizeConsole(int x, int y) {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, x, y, TRUE);
}
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
	for (int i = 0; i < amount; i++) 
		A[i] = x;
}
Sort::~Sort()
{
	delete[] A;
}

// lấy giá trị của biến speed
int Sort::getSpeed()
{
	return speed;
}


// cài giá trị cho biến speed
void Sort::setSpeed(int x)
{
	speed = x;
}

int Sort::getMax() 
{
	int max = A[0];
	for (int i = 0; i < amount; i++) {
		if (A[i] > max)
			max = A[i];
	}
	return max;
}

void Sort::gotoXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Sort::input_manual()
{
	wcout << L"Nhập số phần tử của dãy: ";
	cin >> amount;
	A = new int[amount];
	for (int i = 0; i < amount; i++) {
		wcout << "A[" << i << "]= ";
		cin >> A[i];
	}
	wcout << L"Dãy đã nhập: ";
	for (int i = 0; i < amount; i++) 
		wcout << A[i] << " ";
	wcout << endl << L"\nBấm phím bất kì để tiếp tục\n";
	system("pause");
}
void Sort::input_random()
{
	system("cls");
	wcout << L"Nhập số phần tử của dãy: ";
	cin >> amount;
	A = new int[amount];
	for (int i = 0; i < amount; i++)
		A[i] = rand() % 1000 + 0;
	wcout << L"Dãy đã nhập: ";
	for (int i = 0; i < amount; i++) 
		wcout << A[i] << " ";
	wcout << endl << L"\nBấm phím bất kì để tiếp tục\n";
	system("pause");
}
void Sort::input_from_file()
{
	string link;
	bool kt;
	do
	{
		wcout << L"Nhập đường dẫn file: ";
		cin >> link;
		ifstream fileInput(link, ios::in);
		if (fileInput.fail())
		{
			wcout << L"File không tồn tại mời nhập lại!" << endl;
		}
		kt = fileInput.fail();
	} while (kt);
	ifstream fileInput(link, ios::in);
	for (int i = 0; !fileInput.eof(); i++)
	{
		fileInput >> A[i];
		amount++;
	}
	fileInput.close();
	wcout << L"Dãy đã nhập: ";
	for (int i = 0; i < amount - 1; i++)
	{
		wcout << A[i] << " ";
	}
	wcout << endl << L"\nBấm phím bất kì để tiếp tục\n";
	system("pause");
}
void Sort::input()
{
	int ch;
	do
	{
		system("cls");
		wcout << L"Chọn cách khởi tạo dãy số:\n1. Nhập trực tiếp từng phần tử\n2. Nhập ngẫu nhiên\n3. Nhập qua file\n";
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

void Sort::Speed()
{
	if (speed == 1) setSpeed(500);
	else if (speed == 2) setSpeed(1000);
	else setSpeed(1500);
}
void Sort::output() 
{
	Speed();
	system("cls");
	wcout << L"Dãy: ";
	for (int i = 0; i < amount; i++)
		wcout << A[i] << " ";
	Sleep(speed);
}

void Sort::start()
{
	wcout << L"Ấn phím Spacebar để bắt đầu, tạm dừng, tiếp tục\n";
	wcout << L"Ấn phím ESC để huỷ\n";

	char key;
	bool flag = true;
	while (flag)
	{
		if (_kbhit())
		{
			key = _getch();
			Sleep(500);
			if (key == 32)
			{
				system("cls");
				wcout << L"Bắt đầu!...\n";
				flag = !flag;
				Sleep(1500);
				return;
			}
			if (key == 27)
			{
				system("cls");
				wcout << L"Huỷ!...";
				Sleep(1500);
				return;
			}
		}
	}
}
void Sort::request()
{
	bool flag = false;
	char ch;
	if (_kbhit())
	{
		ch = _getch();
		if (ch == 32)
		{
			if (flag == false)
			{
				wcout << L"\nThuật toán tạm dừng!...\n";
				wcout << L"Nếu muốn tiếp tục hãy nhấn Spacebar\n";
			}
			flag = !flag;
		}
		else if (ch == 27)
		{
			wcout << L"\nĐang hủy...";
			Sleep(2000);
			menu();
			return;
		}
	}
	if (flag)
	{
		char ch1 = _getch();
		if (ch1 == 27)
		{
			wcout << L"\nĐang hủy...";
			Sleep(2000);
			menu();
			return;
		}
		else
		{
			system("cls");
			wcout << L"Đang tiếp tục...";
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
		wcout << L"Chọn tốc độ biểu diễn thuật toán:\n1. Nhanh\n2. Bình thường\n3. Chậm\n";
		cin >> speed;
	} while (speed < 1 || speed > 3);
	do
	{
		system("cls");
		wcout << L"Chọn thuật toán sắp xếp:\n1. Selection Sort\n2. Interchange Sort\n3. Insertion Sort\n4. Binary Insersion Sort\n5. Bubble Sort\n6. Shaker Sort";
		wcout << L"\n7. Shell Sort\n8. Counting Sort\n9. Radix Sort\n10. Heap Sort\n11. Quick Sort\n12. Merge Sort\n13. Quay lại\n14. Quay lại menu\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O((n-1)(n+3)/2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Selection_Sort();
			break;
		case 2:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n^2)" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O(n*(n-1)/2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			InterChange_Sort();
			break;
		case 3:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(3*(n-1))" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O(3/2*n-1)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Insertion_Sort();
			break;
		case 4:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O(n*(n-1+log2(n))/2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			BinaryInsertion_Sort();
			break;
		case 5:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O(n*(n-1)/2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Bubble_Sort();
			break;
		case 6:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n^2)" << endl;
			wcout << L"Trường hợp xấu nhất O(n*(n-1)/2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Shaker_Sort();
			break;
		case 7:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n^2)" << endl;
			wcout << L"Trường hợp tốt nhất O(n^2)" << endl;
			wcout << L"Trường hợp tốt nhất O(n^2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Shell_Sort();
			break;
		case 8:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n)" << endl;
			wcout << L"Trường hợp xấu nhất O(n*2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Counting_Sort();
			break;
		case 9:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n)" << endl;
			wcout << L"Trường hợp trung bình O(n)" << endl;
			wcout << L"Trường hợp xấu nhất O(2mn)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Radix_Sort();
			break;
		case 10:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n - 1)" << endl;
			wcout << L"Trường hợp trung bình O(log2(n))" << endl;
			wcout << L"Trường hợp xấu nhất O(n*log2(n))" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Heap_Sort();
			break;
		case 11:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n*log(n))" << endl;
			wcout << L"Trường hợp trung bình O(n*log(n))" << endl;
			wcout << L"Trường hợp xấu nhất O(n^2)" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Quick_Sort();
			break;
		case 12:
			system("cls");
			wcout << L"Trường hợp tốt nhất O(n*log(n))" << endl;
			wcout << L"Trường hợp trung bình O(n*log(n))" << endl;
			wcout << L"Trường hợp xấu nhất O(n*log(n))" << endl;
			wcout << endl << L"Bấm phím bất kì để tiếp tục\n";
			system("pause");
			Merge_Sort();
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
	int ch = 0;
	do
	{
		system("cls");
		wcout << L"MENU:\n1. Khởi tạo dãy số\n2. Chọn thuật toán sắp xếp\n3. Thoát\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input();
			break;
		case 2:
			if (amount == 0) {
				wcout << L"Dãy số rỗng!!!" << endl;
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
